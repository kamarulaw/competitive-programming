class Solution {
public:
    int countGoodSubstrings(string s) {
      int ng = 0; 
      map<char, int> temp;
      for (int i = 0; i < s.length(); i++) { 
        bool allsingle = true; 
        string sub = s.substr(i, 3); 
        if (sub.length() == 3) { 
          for (int j = 0; j < sub.length(); j++) { 
            temp[sub[j]]++; 
          }
          bool allsingle = true; 
          for (auto it: temp) { 
            if (it.second > 1) 
              allsingle = false;
          }
          if (allsingle == true) 
            ng++; 
        }
        temp.clear(); 
      }
      return ng; 
    }
};