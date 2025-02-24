/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) 
    {
        int n = nums.size();   
        sort(nums.begin(),nums.end());
        if (nums[n-1]-nums[0]<=2*k)
        {
            return 0;
        }
        else
        {
            return nums[n-1]-nums[0]-2*k;
        }
    }
};
