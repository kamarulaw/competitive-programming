/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int getMaximumGenerated(int n) 
    {
        if (n == 0)
        {
            return 0;
        }
        vector<int> nums(n+1,0); nums[1] = 1; int max_ = 1;
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                nums[i] = nums[i/2];
            }
            else 
            {
                nums[i] = nums[(i-1)/2] + nums[((i-1)/2) + 1];
            }
            max_ = max(max_, nums[i]);
        }    
        return max_;
    }
};
