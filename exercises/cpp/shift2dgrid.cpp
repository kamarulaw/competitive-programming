/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> row(n,0);
        vector<vector<int>> newgrid(m,row);
        for (int iteration = 0; iteration < k; iteration++)
        {
            int tmp; int tmp2;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (j != n-1)
                    {
                        newgrid[i][j+1] = grid[i][j]; 
                    }
                    if (j == n-1 && i != m-1)
                    {
                        newgrid[i+1][0] = grid[i][j];
                    }
                    if (j == n-1 && i == m-1)
                    {
                        newgrid[0][0] = grid[i][j];
                    }
                }
            }
            grid = newgrid;
        }
        return grid;    
    }
};
