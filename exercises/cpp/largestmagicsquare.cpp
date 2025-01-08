/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 43 of 80 */
class Solution {
public:
    bool ismagicutil(int sr,int sc,int k,vector<vector<int>> grid)
    {
        vector<int> sums;
        for (int i = 0; i < k; i++)
        {
            int rsum = 0;
            int csum = 0;
            for (int j = 0; j < k; j++)
            {
                rsum += grid[sr+i][sc+j];
                csum += grid[sr+j][sc+i];
            }
            sums.push_back(rsum);
            sums.push_back(csum);
        }
        for (int i = 0; i < sums.size()-1; i++)
        {
            if (sums[i] != sums[i+1])
            {
                return false;
            }
        }
        int ind = 0;
        int ldsum = 0;
        int rdsum = 0;
        while (ind < k)
        {
            rdsum += grid[sr+ind][sc+ind]; ind++;
        }
        if (sums[0] != rdsum)
        {
            return false;
        }
        ind = 0;
        while (ind < k)
        {
            ldsum += grid[sr+ind][sc+k-1-ind]; ind++;
        }
        if (sums[0] != ldsum)
        {
            return false;
        }
        return true;
    }

    int largestMagicSquare(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        int sol = 1;    
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int k = 2;
                while (i + k <= m && j + k <= n)
                {
                    if (ismagicutil(i,j,k,grid))
                    {
                        sol = max(sol,k);
                    }
                    k++;
                }
            }
        }
        return sol;
    }
};
