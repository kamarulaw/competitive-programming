/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    int dominantIndices(vector<int>& nums) 
    {
        int n = nums.size();

        vector<double> means;

        for (int i = 0; i < n; i++)
        {
            double tot = 0.0;
            int start = i+1;
            for (int j = start; j < n; j++)
            {
                tot += nums[j];
            }
            means.push_back(tot/(n-start));
        }

        int ans = 0;

        for (int i = 0; i < n-1; i++)
        {
            if (nums[i] > means[i])
            {
                ans++;
            }
        }
        return ans;
    }
};
