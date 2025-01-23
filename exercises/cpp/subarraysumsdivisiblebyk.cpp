/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 38 of 76 */
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                int sum = 0;
                vector<int> sarr(nums.begin()+i,nums.begin()+i+j);
                for (int p = 0; p < sarr.size(); p++)
                {
                    sum += sarr[p];
                }
                if (sum % k == 0)
                {
                    ans++;
                }
            }
        }    
        return ans;
    }
};
