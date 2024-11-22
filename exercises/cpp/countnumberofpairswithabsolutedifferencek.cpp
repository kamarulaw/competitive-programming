/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(nums[i]-nums[j]) == k)
                {
                    sol++;
                }
            }
        }
        return sol / 2 ;    
    }
};