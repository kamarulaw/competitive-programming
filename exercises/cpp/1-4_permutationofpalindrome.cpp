#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool isPermutationOfPalindrome(string s) { 
  string snew = ""; 
  map<char, int> m; 
  for (int i = 0; i < s.length(); i++) { 
    if (s[i] != ' ') {
      snew += s[i];
      m[s[i]]++;
    }
  }
  int len = snew.length(); 
  int nodds = 0; 
  for (auto it: m) { 
    if (it.second % 2 == 1)
      nodds++; 
    if (len % 2 == 0 && nodds > 1)
      return false; 
  }  
  return true; 
}

int main() { 
  cout << isPermutationOfPalindrome("Tact Coa") << endl; 
  return 0;
}
