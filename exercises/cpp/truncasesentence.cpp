class Solution {
public:
    string truncateSentence(string s, int k) {
      string result = "";
      int nspaces = 0; 
      for (int i = 0; i < s.length(); i++) { 
        if (s[i] == ' ')
          nspaces++; 
        if (nspaces == k)
          return result; 
        result += s[i];
      }
      return result; 
    }
};