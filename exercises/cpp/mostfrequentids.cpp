/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 562 of 623 */
class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) 
    {
        int n = nums.size();
        map<int,long long> m;
        vector<long long> ans;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]] += (freq[i]);
            long long cmax = 0;
            for (auto it : m)
            {
                if (it.second > cmax)
                {
                    cmax = it.second;
                }
            }
            ans.push_back(cmax);
        }    
        return ans;
    }
};
