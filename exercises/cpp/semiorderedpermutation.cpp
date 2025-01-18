/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) 
    {
        int sol = 0;
        int n = nums.size();
        int ndivn_index = INT_MIN;
        int nndivn_index = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                ndivn_index = i;
            }
            if (nums[i] == n)
            {
                nndivn_index = i;
            }
        }
        if (nums[0] == 1 && nums[n-1] == n)
        {
            return 0;
        }
        else if (nums[n-1] == n)
        {
            return ndivn_index;
        }
        else if (nums[0] == 1)
        {
            return n-1-nndivn_index;
        }
        else if (ndivn_index < nndivn_index)
        {
            return ndivn_index + n-1-nndivn_index;
        }
        else 
        {
            return ndivn_index + n-1-nndivn_index-1;
        }    
    }
};
