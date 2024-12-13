/* SOLUTION 1  */
/* All tests passed */
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        int sol = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<int> v = grid[i]; sort(v.begin(), v.end()); grid[i] = v;
        }  
        for (int i = 0; i < n; i++)
        {
            int colmax = INT_MIN;
            for (int j = 0; j < m; j++)
            {
                colmax = max(colmax, grid[j][i]);
            }
            sol += colmax;
        }  
        return sol; 
    }
};
