#include <vector>
#include <iostream>

using namespace std;

vector<string> gs1; 
vector<string> gs2; 

bool isBalanced(string st) {
  int counter = 0; 
  // Post Condition: counter = 0
  for (int i = 0; i < st.length(); i++) { 
    
    if (st[i] == '(') {
      counter++;
    } else { 
      counter--;
    }

    if (counter < 0) { 
      return false; 
    }
  }
  if (counter == 0) { 
    return true;
  } else { 
    return false; 
  }
}

void generateStrings(string s, int i, int n) { 
  if (i == n) { 
    if (isBalanced(s)) {
      gs1.push_back(s);
    }
    return; 
  }
  generateStrings(s+'(', i+1, n);
  generateStrings(s+')', i+1, n);
}

void generateStrings2(string s, int i, int n, int counter) { 
  if (i == n) { 
    if (counter == 0) {
      gs2.push_back(s);
    }
    return; 
  }
  generateStrings(s+'(', i+1, n, counter+1);
  
  if (counter > 0)
    generateStrings(s+')', i+1, n, counter-1);
}

int main() {
  /* 
  // Test Code for isBalanced
  
  string eg1 = "())";
  string eg2 = "()";
  string eg3 = "(";
  string eg4 = ")(";
  string eg5 = "()(()())";
  string eg6 = "";
  
  cout << "()): " << isBalanced(eg1) << endl;
  cout << "(): " << isBalanced(eg2) << endl; 
  cout << "(: " << isBalanced(eg3) << endl; 
  cout << ")(: " << isBalanced(eg4) << endl; 
  cout << "()(()()): " << isBalanced(eg5) << endl;
  cout << ": " << isBalanced(eg6) << endl; 
  */
  generateStrings("", 0, 4);
  generateStrings2("", 0, 8, 0);  
}
