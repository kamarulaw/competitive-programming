/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minimumCost(vector<int>& cost) 
    {
        sort(cost.begin(),cost.end());
        int i = cost.size()-1;
        int mincost = 0;
        while (i >= 0)
        {
            mincost += cost[i]; i--;
            if (i < 0)
            {
                continue;
            }
            else 
            {
                mincost += cost[i]; i-=2;
            }
        }    
        return mincost;
    }
};
