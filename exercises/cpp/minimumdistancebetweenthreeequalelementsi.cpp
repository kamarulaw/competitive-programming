/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minimumDistance(vector<int>& nums) 
    {
        int n = nums.size();
        int sol = INT_MAX;    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i!=j && j!=k && i!=k && nums[i]==nums[j] && nums[j]==nums[k])
                    {
                        sol = min(abs(i-j)+abs(j-k)+abs(i-k),sol);
                    }
                }
            }
        }
        if (sol==INT_MAX)
        {
            return -1;
        }
        else 
        {
            return sol;
        }
    }
};
