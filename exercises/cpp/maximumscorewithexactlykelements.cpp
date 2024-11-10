/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        int total = 0;
        sort(nums.begin(),nums.end());
        int start = nums[nums.size()-1];
        for (int i = 0; i < k; i++)
        {
            total += start;
            start++;
        }
        return total;

    }
};
