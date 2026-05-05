/* SOLUTION 1 - 08/27/21 */
/* All tests passed */
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

/* SOLUTION 2 - 12/27/24 */
/* All tests passed */
class Solution {
public:
    bool inbounds(int x, int y, int m, int n)
    {
        if (x < 0 || x >= m || y < 0 || y >= n)
        {
            return false;
        }
        return true;
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        int sol = 0;
        vector<bool> false_vec(n,false);
        vector<vector<bool>> visited(m,false_vec);
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,-1},{0,1}};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (visited[i][j] == false && grid[i][j] == '1')
                {
                    sol++;
                    int startrow = i;
                    int startcol = j;
                    queue<int> row_queue; 
                    queue<int> col_queue; 
                    row_queue.push(startrow);
                    col_queue.push(startcol);
                    visited[startrow][startcol] = true;
                    while (row_queue.size() > 0)
                    {
                        int row = row_queue.front(); 
                        int col = col_queue.front(); 
                        row_queue.pop();
                        col_queue.pop();
                        for (int i = 0; i < dirs.size(); i++)
                        {
                            int newrow = row + dirs[i][0];
                            int newcol = col + dirs[i][1];
                            if (inbounds(newrow,newcol,m,n) && visited[newrow][newcol] == false && grid[newrow][newcol] == '1')
                            {
                                row_queue.push(newrow);
                                col_queue.push(newcol);
                                visited[newrow][newcol] = true;
                            }
                        }
                    }
                }
            }
        }   
        return sol;
    }
};

/* SOLUTION 3 - 5/5/26 */
/* All tests passed */
// ♫⋆｡♪ ₊˚♬ ﾟ. ᯓ‎𝄞… I had to put my back against the wall (and what?). Tell me that I don't deserve to ball
class Solution {
public:

    bool inBounds(int r, int c, int m, int n)
    {
        if (0 <= r && r < m && 0 <= c && c < n)
        {
            return true;
        }
        return false;
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        int sol = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<bool> false_(n, false);
        vector<vector<bool>> visited(m, false_);
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,1},{0,-1}};
        queue<int> row;
        queue<int> col;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1' && visited[i][j] == false)
                {
                    sol++;
                    row.push(i);
                    col.push(j);
                    while (row.size() > 0)
                    {
                        int crow = row.front();
                        int ccol = col.front();
                        row.pop();
                        col.pop();
                        for (int ii = 0; ii < dirs.size(); ii++)
                        {
                            vector<int> dir = dirs[ii];
                            if (inBounds(crow+dir[0], ccol+dir[1], m, n) && visited[crow+dir[0]][ccol+dir[1]] == false && grid[crow+dir[0]][ccol+dir[1]] == '1') 
                            {
                                row.push(crow+dir[0]);
                                col.push(ccol+dir[1]);
                                visited[crow+dir[0]][ccol+dir[1]]= true;
                            }
                        }
                    }
                }
            }
        }
        return sol;
    }
};
