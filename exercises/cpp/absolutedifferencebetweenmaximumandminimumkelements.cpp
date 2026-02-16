/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 864 of 994 */
class Solution {
public:
    int absDifference(vector<int>& nums, int k) 
    {
        if (nums.size()==1)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int min_sum = 0;
        int max_sum = 0;
        for (int i = 0; i < k; i++)
        {
            min_sum += nums[i];
        }    
        for (int i = nums.size()-1; i > nums.size()-1-k; i--)
        {
            max_sum += nums[i];
        }
        return max_sum - min_sum;
    }
};
