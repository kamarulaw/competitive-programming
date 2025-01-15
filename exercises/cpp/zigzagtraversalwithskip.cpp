/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) 
    {
        vector<int> sol;
        int col = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            if (i % 2 == 1)
            {
                reverse(grid[i].begin(), grid[i].end());
            }
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (col % 2 == 0)
                {
                    sol.push_back(grid[i][j]);
                }
                col++;
            }
        }    
        return sol;
    }
};
