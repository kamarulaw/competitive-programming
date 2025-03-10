/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int sol = INT_MAX;
        int n = blocks.size();
        for (int i = 0; i <= n-k; i++)
        {
            int csol = 0;
            for (int j = i; j < i+k; j++)
            {
                if (blocks[j]=='W')
                {
                    csol++;
                }
            }
            sol = min(csol,sol);
        }    
        return sol;
    }
};
