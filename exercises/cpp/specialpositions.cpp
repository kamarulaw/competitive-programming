class Solution {
public:
    bool isSpecial(vector<vector<int>>& mat, int row, int col) { 
      int trow = 0; 
      int tcol = 0;       
      while (trow < mat.size()) { 
        if (mat[trow][col] == 1 && trow != row)
          return false; 
        trow++; 
      }
      
      while (tcol < mat[row].size()) { 
        if (mat[row][tcol] == 1 && tcol != col)
          return false; 
        tcol++; 
      }
      return true; 
    }
  
    int numSpecial(vector<vector<int>>& mat) {
      int ns = 0; 
      for (int i = 0; i < mat.size(); i++) { 
        for (int j = 0; j < mat[i].size(); j++) { 
          if (mat[i][j] == 1 && isSpecial(mat, i, j)) { 
            ns++; 
          }
        }
      }
      return ns; 
    }
};