class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      int m = mat.size(); 
      int n = mat[0].size(); 
      if (m*n != r*c)
        return mat; 
      int counter = 0; 
      vector<int> curr; 
      vector<vector<int>> res; 
      for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
          counter++; 
          curr.push_back(mat[i][j]);
          if (counter % c == 0) { 
            res.push_back(curr);
            curr.clear(); 
          }
        }
      }
      return res; 
    }
};