/* SOLUTION 1 */
/* psf */
class Solution {
public:
    int alternatingSubarray(vector<int>& nums) 
    {
        int sol = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                vector<int> subarr;
                for (int jj = 0; jj < j; jj++)
                {
                    subarr.push_back(nums[jj]);
                }
                bool flag = true;
                int m = subarr.size();
                for (int k = 1; k < m; k++)
                {
                    if (subarr[k]-subarr[k-1]!=pow(-1,k-1))
                    {
                        flag = false;
                    }
                }
                if (flag==true)
                {
                    sol = max(sol,m);
                }
            }
        }
        if (sol==INT_MIN)
        {
            return -1;
        }
        else
        {
            return false;
        }
    }
};
