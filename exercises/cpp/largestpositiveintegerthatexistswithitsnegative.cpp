/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        map<int,set<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[abs(nums[i])].emplace(nums[i]);
        }
        int sol = -1;
        for (auto it: m)
        {
            if (it.second.size() == 2 && it.first > sol)
            {
                sol = it.first;
            }
        }
        return sol;
    }
};
