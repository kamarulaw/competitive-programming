/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j && grid[i][j] == 0)
                {
                    return false;
                }
                if (i != j && grid[i][j] != 0)
                {
                    return false;
                }
            }
        }
        return true;    
    }
};
