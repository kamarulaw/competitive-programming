class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int ds = 0; 
      int rows = mat.size(); 
      for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < rows; j++) { 
          if ((i == j) || (i + j == rows - 1))
            ds += mat[i][j];
        }
      }
      return ds; 
    }
};