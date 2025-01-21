/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int sumCounts(vector<int>& nums) 
    {
        int ans = 0;
        int n = nums.size();
        vector<map<int,int>> vms;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                map<int,int> m;
                vector<int> sarr(nums.begin()+i,nums.begin()+i+j);
                for (int k = 0; k < sarr.size(); k++)
                {
                    m[sarr[k]]++;
                }
                ans += pow(m.size(),2);
            }
        }    
        return ans;
    }
};
