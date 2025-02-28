/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minimumSum(vector<int>& nums) 
    {
        int sol = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i<j&&j<k&&nums[i]<nums[j]&&nums[k]<nums[j])
                    {
                        sol = min(nums[i]+nums[j]+nums[k],sol);
                    }
                }
            }
        } 
        if (sol == INT_MAX)
        {
            return -1;
        }   
        else
        {
            return sol;
        }
    }
};
