class Solution {
public:
    void dfs(vector<vector<char>> &grid, int row, int col) { 
      int m = grid.size();
      int n = grid[0].size(); 
      int rp = row+1; 
      int cp = col+1; 
      int rm = row-1; 
      int cm = col-1; 
      
      grid[row][col] = '0';
      if (0 <= rp && rp < m && grid[rp][col] == '1') 
        dfs(grid, rp, col);
      if (0 <= rm && rm < m && grid[rm][col] == '1')
        dfs(grid, rm, col);
      if (0 <= cp && cp < n && grid[row][cp] == '1') 
        dfs(grid, row, cp);
      if (0 <= cm && cm < n && grid[row][cm] == '1') 
        dfs(grid, row, cm);
    }
  
    int numIslands(vector<vector<char>>& grid) {
      int numislands = 0; 
      int m = grid.size(); 
      int n = grid[0].size(); 
      for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) { 
          if (grid[i][j] == '1') { 
            numislands++; 
            dfs(grid, i, j);
          }
        }
      }
      return numislands; 
    }
};