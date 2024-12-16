/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        if (nums.size() < 2)
        {
            return 0;
        }    
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sol = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            sol = max(sol, nums[i] - nums[i-1]);
        }
        return sol;
    }
};
