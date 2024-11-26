/* SOLUTION 1 */
/* All tests passed */ 
class Solution {
public:
    int smallestEqual(vector<int>& nums) 
    {
        int ans = INT_MAX; 
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (i % 10 == nums[i])
            {
                ans = i;
                return ans;
            }
        }
        if (ans == INT_MAX)
        {
            return -1;
        } 
        return ans;
    }
};
