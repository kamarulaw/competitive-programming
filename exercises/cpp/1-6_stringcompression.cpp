#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

string stringCompression(string s) { 
  int n = s.length(); 
  int idx = 0; 
  string res = "";
  while (idx < n) { 
    char curr = s[idx];
    int count = 0; 
    while (idx < n && curr == s[idx]) { 
      idx++; 
      count++; 
    }
    res += curr; 
    res += to_string(count);
  }
  return res; 
}

int main() { 
  cout << stringCompression("aabcccccaaa") << endl; // aabcccccaaa
  return 0;
}
