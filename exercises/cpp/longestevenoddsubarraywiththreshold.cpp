/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 3415 of 6873 */
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) 
    {
        int sol = 0;
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
                if (subarr[0]%2 != 0)
                {
                    flag = false;
                }
                if (!(flag))
                {
                    continue;
                }
                for (int jj = 0; jj < subarr.size(); jj++)
                {
                    if (subarr[jj] > threshold)
                    {
                        flag = false;
                    }
                }
                if (!(flag))
                {
                    continue;
                }
                for (int jj = 0; jj < subarr.size()-1; jj++)
                {
                    if (subarr[jj]%2==subarr[jj+1]%2)
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
