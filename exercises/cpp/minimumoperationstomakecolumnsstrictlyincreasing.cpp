/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        int sol = 0;
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] > grid[i-1][j])
                {
                    continue;
                }
                else 
                {
                    while (grid[i][j] <= grid[i-1][j])
                    {
                        grid[i][j]++;
                        sol++;
                    }
                }
            }
        }    
        return sol;
    }
};
