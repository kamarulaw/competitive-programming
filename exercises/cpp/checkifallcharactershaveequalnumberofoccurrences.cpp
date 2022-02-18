class Solution {
public:
    bool areOccurrencesEqual(string s) {
      map<char, int> m; 
      for (int i = 0; i < s.length(); i++)  
        m[s[i]]++; 
      int num = m[s[0]];
      for (auto it: m) {
        if (it.second != num)
          return false; 
      }
      return true; 
    }
};