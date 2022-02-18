class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
      int cr, cc;
      int ovs = 0; 
      vector<int> index; 
      int mat[m][n]; 
      vector<int> elem; 
      vector<vector<int>> matrix; 
      for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
          elem = {i, j, 0}; 
          matrix.push_back(elem);
        }
      }
      for (int i = 0; i < indices.size(); i++) { 
        index = indices[i];
        cr = index[0];
        cc = index[1];
        for (int j = 0; j < matrix.size(); j++) { 
          if (matrix[j][0] == cr) 
            matrix[j][2]++; 
          if (matrix[j][1] == cc) 
            matrix[j][2]++; 
        }
      }
      for (int i = 0; i < matrix.size(); i++) { 
        if (matrix[i][2] % 2 == 1)
          ovs++;
      }
      return ovs; 
    }
};