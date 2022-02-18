class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      int numcons = 0; 
      set<char> chars; 
      for (int i = 0; i < allowed.length(); i++) 
        chars.insert(allowed[i]);
      for (auto word: words) { 
        set<char> wchars; 
        for (int i = 0; i < word.length(); i++) 
          wchars.insert(word[i]); 
        bool containsall = true; 
        for (auto c: wchars) { 
          if (chars.count(c) == 0) 
            containsall = false; 
        }
        if (containsall == true) 
          numcons++; 
        wchars.clear(); 
      }
      return numcons; 
    }
};