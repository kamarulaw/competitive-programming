/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) 
    {   
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (((i-k>=0&&nums[i]>nums[i-k])&&(i+k<n&&nums[i]>nums[i+k])))
            {
                sum += nums[i];
            }
            else if (((i-k<0)&&(i+k<n&&nums[i]>nums[i+k])))
            {
                sum += nums[i];
            }
            else if (((i+k>=n)&&(i-k>=0&&nums[i]>nums[i-k])))
            {
                sum += nums[i];
            }
            else if ((i+k>=n)&&(i-k<0))
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};
