class Solution {
public:
    int firstUniqChar(string s) {
      int res = INT_MAX; 
      map<char, vector<int>> m; 
      for (int i = 0; i < s.length(); i++) { 
        if (m.count(s[i]) == 0) { 
          m[s[i]].push_back(i);
          m[s[i]].push_back(1);
        } else { 
          m[s[i]][1]++; 
        }
      }
      for (auto it: m) { 
        if (it.second[1] == 1) 
          res = min(res, it.second[0]);
      }
      if (res != INT_MAX)
        return res; 
      return -1; 
    }
};