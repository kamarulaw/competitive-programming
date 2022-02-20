#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool ispermutation(string s1, string s2) { 
  if (s1.length() != s2.length()) 
    return false; 
  map<char, int> m1; 
  map<char, int> m2; 
  for (int i = 0; i < s1.length(); i++) { 
    m1[s1[i]]++; 
    m2[s2[i]]++;
  }
  for (auto it: m1) 
    if (m1[it.first] != m2[it.first])
      return false; 
  return true; 
}

int main() { 
  cout << ispermutation("chicken", "hcicken") << endl; // true
  cout << ispermutation("girls", "rigls") << endl; // true
  cout << ispermutation("legs", "legg") << endl; // false
  cout << ispermutation("jonathan", "jonathaa") << endl; // false
  cout << endl; 
  return 0;
}
