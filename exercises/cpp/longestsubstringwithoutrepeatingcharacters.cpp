class Solution {  
public:
    int max(int i, int j) { 
      if (i > j) 
        return i; 
      else
        return j; 
    }
    
    int lengthOfLongestSubstring(string s) {
      if (s.length() == 1) { 
        return 1; 
      }
      int n = s.length();
      int ls = 0; 
      map<char, int> m; 
      for (int i = 0; i < n; i++) {
        int j = i; 
        while (j < n) {
          m[s[j]]++; 
          if (m[s[j]] > 1) { 
            ls = max(ls, m.size());
            m.clear(); 
            break; 
          }
          j++; 
        }
      }
      return ls; 
    }
};