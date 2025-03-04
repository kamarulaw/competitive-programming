/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int alternatingSubarray(vector<int>& nums) 
    {
        int sol = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j <= n-i; j++)
            {
                vector<int> subarr;
                for (int jj = i; jj < i+j; jj++)
                {
                    subarr.push_back(nums[jj]);
                }
                /*
                bool flag = true;
                int m = subarr.size();
                for (int k = 2; k < m; k++)
                {
                    if (subarr[k]-subarr[k-1]!=pow(-1,k-1))
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    sol = max(sol,m);
                }
                */
                bool flag = true;
                for (int k = 0; k < j; k++)
                {
                    if (subarr[k]!=subarr[k%2] || subarr[1]!=subarr[0]+1)
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    sol = max(sol,j);
                }
            }
        }
        if (sol==INT_MIN)
        {
            return -1;
        }
        else
        {
            return sol;
        }
    }
};
