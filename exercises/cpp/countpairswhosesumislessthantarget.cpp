/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int countPairs(vector<int>& nums, int target) 
    {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (nums[i] + nums[j] < target)
                {
                    ans++;
                }
                else 
                {
                    break; 
                }

            }
        }
        return ans;
    }
};
