/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int sol = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                vector<int> arr(nums.begin()+i,nums.begin()+i+j);
                int csol;
                for (int r = 0; r < arr.size(); r++)
                {
                    if (r == 0)
                    {
                        csol = arr[r];
                    }
                    else
                    {
                        csol |= arr[r];
                    }
                }
                if (csol >= k)
                {
                    sol = min(sol,(int)arr.size());
                }
            }
        }   
        if (sol == INT_MAX)
        {
            return -1;
        }
        else
        {
            return sol;
        }
    }
};
