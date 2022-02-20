#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

bool isunique(string s) { 
  map<char, int> m; 
  for (int i = 0; i < s.length(); i++) { 
    m[s[i]]++; 
    if (m[s[i]] > 1)
      return false; 
  }
  return true; 
}

bool isunique2(string s) { 
  sort(s.begin(), s.end());
  for (int i = 0; i < s.length()-1; i++) { 
    if (s[i] == s[i+1])
      return false; 
  }
  return true; 
}

int main() { 
  cout << isunique("string") << endl; // true
  cout << isunique("sstring") << endl; // false
  cout << isunique("staslfj") << endl; // false
  cout << isunique("wtfdude") << endl; // fasle
  cout << isunique("asdfghjkl12345678") << endl; // true
  cout << endl; 
  
  cout << isunique2("string") << endl; // true
  cout << isunique2("sstring") << endl; // false
  cout << isunique2("staslfj") << endl; // false
  cout << isunique2("wtfdude") << endl; // fasle
  cout << isunique2("asdfghjkl12345678") << endl; // true
  return 0;
}
