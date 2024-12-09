/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int averageValue(vector<int>& nums) 
    {
        int num = 0;
        int numsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 3 == 0 && nums[i] % 2 == 0)
            {
                num++;
                numsum += nums[i];
            }
        }    
        if (num == 0)
        {
            return 0;
        }
        else
        {
            return numsum/num;
        }
    }
};