/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 47 of 54 */
class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) 
    {
        int pairCount = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i < j && lower <= nums[i] + nums[j] && nums[i] + nums[j] <= upper)
                {
                    pairCount++;
                }
            }
        } 
        return pairCount;      
    }
};
