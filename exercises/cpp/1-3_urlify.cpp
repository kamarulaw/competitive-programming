#include <iostream>

using namespace std;

string URLify(string s) { 
  string snew = ""; 
  for (int i = 0; i < s.length(); i++) { 
    if (s[i] != ' ') {
      snew += s[i];
    } else {
      snew += '%';
      snew += to_string(20);
    }
  }
  return snew;
}

int main() { 
  cout << URLify("Mr John Smith") << endl; 
  return 0;
}
