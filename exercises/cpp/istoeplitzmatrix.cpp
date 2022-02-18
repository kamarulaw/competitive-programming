class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
      int m = matrix.size(); 
      int n = matrix[0].size(); 
      
      for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
          int elem = matrix[i][j];
          int nr = i+1; 
          int nc = j+1; 
          while (nr < m && nc < n) { 
            if (matrix[nr][nc] != elem)
              return false; 
            nr++; 
            nc++;
          }
        }
      } 
      return true; 
    }
};