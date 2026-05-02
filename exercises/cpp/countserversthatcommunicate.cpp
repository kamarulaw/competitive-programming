/* SOLUTION 1 */
/* psf */
class Solution {
public: 
    bool inBounds(int i, int j, int m, int n)
    {
        if (0 <= i && i < m && 0 <= j && j < n)
        {
            return true;
        }
        return false;
    }


    int countServers(vector<vector<int>>& grid) 
    {
        map<vector<int>,int> ht;
        int m = grid.size();
        int n = grid[0].size();
        vector<int> xDeltas = {-1,1,0};
        vector<int> yDeltas = {-1,1,0};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int ii = 0; ii < 3; ii++)
                {
                    for (int jj = 0; jj < 3; jj++)
                    {
                        if (inBounds(i+xDeltas[ii], j+yDeltas[jj], m, n) && ((i != i+xDeltas[ii] && j != j+yDeltas[jj])))
                        {
                            if (grid[i+xDeltas[ii]][j+yDeltas[jj]] == 1)
                            {
                                vector<int> pair_ = {i+xDeltas[ii],j+yDeltas[jj]}; 
                                ht[pair_] = 1;
                            }
                        }
                    }
                }
            }
        }
        int ans = 0;
        for (auto it : ht)
        {
            if (ht[it.first]==1)
            {
                ans++;
            }
        }    
        return ans;
    }
};
