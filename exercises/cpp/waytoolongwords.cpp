#include <iostream>
#include <string>

using namespace std;

int main() {
  int n; 
  cin >> n;
  string temp; 
  for (int i = 0; i < n; i++) { 
    cin >> temp; 
    if (temp.length() <= 10) { 
      cout << temp << endl; 
    } else { 
      string result = ""; 
      int len = temp.length(); 
      char first = temp[0];
      char last = temp[len-1];
      len -= 2; 
      result += first; 
      result += to_string(len);
      result += last; 
      cout << result << endl; 
    }
  }
  return 0;
}
