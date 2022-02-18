class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
      int negs = 0; 
      int m = grid.size(); 
      int n = grid[0].size(); 
      for (int i = m-1; i >= 0; i--) { 
        for (int j = n-1; j >= 0; j--) { 
          if (grid[i][j] < 0)
            negs++;
          if (grid[i][j] >= 0)
            break; 
        }
      }
      return negs; 
    }
};