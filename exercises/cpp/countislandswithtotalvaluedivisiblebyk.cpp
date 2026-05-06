/* SOLUTION 1 */
/* PROGRESS SO FAR */

class Solution {
public:
    bool inBounds(int r, int c, int m, int n)
    {
        if (r >= m || r < 0 || c >= n || c < 0)
        {
            return false;
        }
        return true;
    }

    int countIslands(vector<vector<int>>& grid, int k) 
    {
        int sol = 0;
        int m = grid.size();
        int n = grid[0].size();
        queue<int> row;
        queue<int> col; 
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,1},{0,-1}};
        vector<bool> false_(n, false);
        vector<vector<bool>> visited(m, false_);
        for (int i = 0; i < m; i++)
        {
            int total = 0;
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] > 0)
                {
                    row.push(i);
                    col.push(j);
                    total += grid[i][j];
                    while (row.size() > 0)
                    {
                        int crow = row.front();
                        int ccol = col.front();
                        row.pop();
                        col.pop();
                        if (inBounds(crow,ccol,m,n) && visited[crow][ccol] == false && grid[crow][ccol] > 0)
                        {
                            total += grid[crow][ccol];
                            visited[crow][ccol] = true;
                        }
                    }
                }
            }
            if (total%k==0)
            {
                sol++;
            }
        }
        return sol;
    }
};
