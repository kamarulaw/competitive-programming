#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool cmp(map<char, char> first, map<char, char> second) { 
  
}

int main() {
  // Problem 1
  string s = "hello";
  map<char, int> m; 
  for (int i = 0; i < s.length(); i++)
    m[s[i]]++; 
  for (auto elem: m) 
    cout << elem.first << " " << elem.second << endl; 
    
  // Problem 2
  string s = "hello"
  char c = 't'; 
  for (int i = 0; i < s.length(); i++) { 
    if (c == s[i]) {
      cout << "found" << endl; 
      break; 
    }
  }
  
  // Problem 3 
  map<char, char> m1; 
  map<char, char> m2; 
  
  // Test Case
  // Ukraine, Latvia, Belgium 
  
  return 0; 
}
