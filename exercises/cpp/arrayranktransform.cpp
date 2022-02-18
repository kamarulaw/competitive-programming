class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
      map<int, int> m; 
      vector<int> copy;
      vector<int> res; 
      for (int elem: arr) 
        copy.push_back(elem);
      sort(copy.begin(), copy.end());
      int rank = 1; 
      for (int i = 0; i < copy.size(); i++) { 
        if (m.count(copy[i]) == 0) { 
          m[copy[i]] = rank;
          rank++; 
        }
      }
      for (int elem: arr) { 
        res.push_back(m[elem]);
      }
      return res; 
    }
};