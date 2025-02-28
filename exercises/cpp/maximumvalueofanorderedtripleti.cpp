/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int n = nums.size();
        long long sol = (long long)(nums[0]-nums[1])*nums[2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i < j && j < k)
                    {
                        long long potentialsol = (long long)(nums[i]-nums[j])*nums[k];
                        sol = max(potentialsol,sol);
                    }
                }
            }
        }
        if (sol<=0)
        {
            return 0;
        }
        else
        {
            return sol;
        }
    }
};
