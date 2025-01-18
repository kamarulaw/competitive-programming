/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int min_ = nums[0];
        int max_ = nums[n-1];
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != min_ && nums[i] != max_)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
