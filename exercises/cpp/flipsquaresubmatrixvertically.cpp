/* SOLUTION 1 */
/* psf */

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) 
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> result;
        vector<int> row;
        for (int i = 0; i < n; i++)
        {
            row.push_back(0);
        }    
        for (int i = 0; i < m i++)
        {
            result.push_back(row); 
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                result[i][j] = grid[i][j];
            }
        }
        int tl_row = x;
        int tl_col = y;
        
        int tr_row = x;
        int tr_col = y+k-1;
        
        int bl_row = 
        int bl_col =
        
        int br_row =
        int br_col =  
        
    }
};
