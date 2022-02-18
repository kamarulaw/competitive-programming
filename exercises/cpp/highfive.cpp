class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
      map<int,vector<int>> m; 
      vector<vector<int>> result; 
      for (auto vec: items) { 
        int id = vec[0] ;
        int score = vec[1];
        m[id].push_back(score);
      }
      for (auto it: m) {
        int id = it.first;
        vector<int> scs = it.second; 
        sort(scs.begin(), scs.end(), greater<int>());
        int hf = (scs[0] + scs[1] + scs[2] + scs[3] + scs[4]) / 5;
        vector<int> temp = {id, hf}; 
        result.push_back(temp);
      }
      return result; 
    }
};