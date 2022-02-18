class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> res;
      vector<int> curr;
      curr.push_back(1);
      res.push_back(curr);
      curr.clear();
      if (numRows == 1) 
        return res; 
      curr.push_back(1);
      curr.push_back(1);
      res.push_back(curr);
      if (numRows == 2) { 
        curr.clear(); 
        return res; 
      }
      for (int i = 3; i <= numRows; i++) { 
        curr.clear(); 
        vector<int> prev = res[res.size()-1];
        int ind = 0; 
        curr.push_back(1);
        while (ind < prev.size()-1) { 
          curr.push_back(prev[ind] + prev[ind+1]);
          ind++; 
        }
        curr.push_back(1);
        res.push_back(curr);
      }
      return res; 
    }
};