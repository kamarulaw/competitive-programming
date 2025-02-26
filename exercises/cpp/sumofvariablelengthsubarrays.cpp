/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int subarraySum(vector<int>& nums) 
    {
        vector<int> sums;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            int start = max(0,i-nums[i]);
            for (int j = start; j <= i; j++)
            {
                sum += nums[j];
            }
            sums.push_back(sum);
        }    
        int sol = 0;
        for (int i = 0; i < sums.size(); i++)
        {
            sol += sums[i];
        }
        return sol;
    }
};
