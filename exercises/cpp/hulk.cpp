#include <iostream>

using namespace std;

int main() { 
  int n; 
  cin >> n; 
  string res = "I "; 
  for (int i = 0; i < n; i++) { 
    if (i%2 == 0)
      res += "hate "; 
    else
      res += "love "; 
      
    if (i != n-1)
      res += "that I "; 
  }
  res += "it";
  cout << res << endl; 
  return 0; 
}
