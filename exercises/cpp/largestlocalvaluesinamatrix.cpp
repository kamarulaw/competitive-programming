/* SOLUTION 1 */
/* MEMORY LIMIT EXCEEDED ON CASE 49 of 50 */
class Solution {
public:
    vector<int> llv;
    int findlocalmax(int sr,int sc,vector<vector<int>> grid)
    {
        int max_ = INT_MIN;
        for (int i = sr; i <= sr + 2; i++)
        {
            for (int j = sc; j <= sc + 2; j++)
            {
                max_ = max(max_,grid[i][j]);
            }
        }
        return max_;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<int> largest_local_values;    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + 2 <= n-1 && j + 2 <= n-1)
                {
                    llv.push_back(findlocalmax(i,j,grid));
                }
            }
        }
        int ind = 0;
        vector<int> zerovec(n-2,0);
        vector<vector<int>> sol(n-2,zerovec);
        for (int i = 0; i < n-2; i++)
        {
            for (int j = 0; j < n-2; j++)
            {
                sol[i][j] = llv[ind]; ind++;
            }
        }
        return sol;
    }
};
