/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findClosestNumber(vector<int>& nums) 
    {
        int n = nums.size();
        sort (nums.begin(),nums.end());
        int sol = INT_MAX;
        for (int i = n-1; i >= 0; i--)
        {
            if (abs(nums[i]) < sol)
            {
                sol = nums[i]; 
            }
        }
        return sol;
    }
};
