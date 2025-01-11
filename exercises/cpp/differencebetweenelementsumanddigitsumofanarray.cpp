/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int elemsum = 0;
        int digitsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            elemsum += nums[i];
            int n = nums[i];
            while (n > 0)
            {
                digitsum += (n % 10);
                n /= 10;
            }
        }
        if (digitsum >= elemsum)
        {
            return digitsum - elemsum;
        }    
        else 
        {
            return elemsum - digitsum;
        }
    }
};
