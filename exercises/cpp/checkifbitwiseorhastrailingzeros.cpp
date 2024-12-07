/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j && (nums[i]|nums[j])%2==0)
                {
                    return true;
                }
            }
        }   
        return false; 
    }
};
