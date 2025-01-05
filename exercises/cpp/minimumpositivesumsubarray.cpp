/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) 
    {
        int n = nums.size();
        vector<int> potential_sols;
        for (int i = 0; i < n; i++)
        {
            for (int j = l; j <= r; j++)
            {
                vector<int> arr;
                if (i+j-1 <= n-1)
                {
                    int sum = 0;
                    vector<int> arr;
                    for (int k = i; k <= i+j-1; k++)
                    {
                        sum += nums[k];
                    }
                    potential_sols.push_back(sum);
                }
            }
        }
        sort(potential_sols.begin(), potential_sols.end());
        for (int i = 0; i < potential_sols.size(); i++)
        {
            if (potential_sols[i] > 0)
            {
                return potential_sols[i];
            }
        }
        return -1;    
    }
};
