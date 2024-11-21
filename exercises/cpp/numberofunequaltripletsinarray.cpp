/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int unequalTriplets(vector<int>& nums) 
    {
        map<int,vector<int>> m;
        int n = nums.size();
        int sol = 0; 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i < j && j < k && nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k])
                    {
                        sol++;
                    }
                }
            }
        }
        return sol; 
    }
};
