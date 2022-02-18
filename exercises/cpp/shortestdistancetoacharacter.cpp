class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
      vector<int> locs; 
      vector<int> result; 
      for (int i = 0; i < s.length(); i++) { 
        if (s[i] == c)
          locs.push_back(i); 
      }
      for (int i = 0; i < s.length(); i++) { 
        int min_ = 1e9; 
        if (s[i] == c)
          result.push_back(0);
        else { 
          for (int j = 0; j < locs.size(); j++) { 
            min_ = min(min_, abs(i - locs[j]));
          }
          result.push_back(min_);
        }
      }
      return result; 
    }
};