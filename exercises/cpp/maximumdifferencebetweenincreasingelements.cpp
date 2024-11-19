/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int ans = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j && nums[j] > nums[i] && nums[j] - nums[i] > ans)
                {
                    ans = nums[j] - nums[i];
                }
            }
        }
        return ans;    
    }
};
