/* SOLUTION 1 */
/* psf */

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) 
    {
        int ind = 0;
        int n = nums.size();
        vector<int> result(n,0);
        for (int i = 0; i < n; i++)
        {
            if (nums[i]>0)
            {
                ind = ind + nums[i];
                ind = ind%n;
                result[i] = nums[ind];
            }
            else if (nums[i]<0)
            {
                ind = ind - abs(nums[i]);
                ind = ind%n;
                result[i] = nums[ind];
            }
            else
            {
                result[i] = nums[i];
            }
        }
        return result;
    }
};
