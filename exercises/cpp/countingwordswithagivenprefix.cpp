class Solution {
public:
    bool containsPref(string pref, string word) { 
      if (word.length() < pref.length()) 
        return false; 
      for (int i = 0; i < pref.length(); i++) { 
        if (pref[i] != word[i]) { 
          return false; 
        }
      }
      return true; 
    }
  
    int prefixCount(vector<string>& words, string pref) {
      int nw = 0; 
      for (int i = 0; i < words.size(); i++) { 
        if (containsPref(pref, words[i])) { 
          nw++; 
        }
      }
      return nw; 
    }
};