/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maxSum(vector<int>& nums) 
    {
        int n = nums.size();
        map<int,vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            int max_ = INT_MIN;
            while (num > 0)
            {
                int tp = num % 10;
                num /= 10;
                max_ = max(max_, tp);
            }   
            m[max_].push_back(nums[i]);
        }
        int sol = INT_MIN;
        for (auto it : m)
        {
            int ss = it.second.size(); 
            sort(it.second.begin(), it.second.end());
            if (ss > 1)
            {
                sol = max(sol, it.second[ss-1] + it.second[ss-2]);
            }
        }
        if (sol == INT_MIN)
        {
            return -1;
        }
        else
        {
            return sol;
        }
    }
};
