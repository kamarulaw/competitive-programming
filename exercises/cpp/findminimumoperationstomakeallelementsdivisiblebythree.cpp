/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int sol = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 3 != 0)
            {
                sol++;
            }
        }    
        return sol;
    }
};
