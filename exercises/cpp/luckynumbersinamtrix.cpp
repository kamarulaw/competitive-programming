class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
      int m = matrix.size(); 
      int n = matrix[0].size(); 
      vector<int> crow, result;
      vector<int> colmins, rowmins; 
      for (int i = 0; i < m; i++) { 
        int min_ = 1e9; 
        crow = matrix[i];
        for (int j = 0; j < n; j++) { 
          min_ = min(min_, matrix[i][j]);
        } 
        rowmins.push_back(min_);
      }
      for (int j = 0; j < n; j++) { 
        int max_ = -1e9; 
        for (int i = 0; i < m; i++) { 
          max_ = max(max_, matrix[i][j]);
        }
        colmins.push_back(max_);
      }
      
      for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
          int elem = matrix[i][j];
          if (colmins[j] == elem && rowmins[i] == elem) 
            result.push_back(elem);
        }
      }
      return result; 
    }
};