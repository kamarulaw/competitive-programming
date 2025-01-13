/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool canAliceWin(vector<int>& nums) 
    {
        int sum = 0;
        int sdsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] / 10 == 0)
            {
                sdsum += nums[i];
            }
            sum += nums[i];
        }    
        return sdsum != sum - sdsum;
    }
};
