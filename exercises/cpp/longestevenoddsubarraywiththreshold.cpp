/* SOLUTION 1 */
/* psf */
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) 
    {
        int sol = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            
            for (int j = 1; j <= n-i; j++)
            {
                vector<int> subarr;
                for (int jj = i; jj < i+j; jj++)
                {
                    subarr.push_back(nums[jj]);
                }
                bool flag = true;
                for (int jj = 1; jj <= j; jj++)
                {
                    if (subarr[jj]%2==subarr[jj-1]%2 || subarr[jj]>threshold || subarr[jj-1]>threshold)
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
        return sol;    
    }
};
