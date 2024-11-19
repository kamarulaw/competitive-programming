/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int n = nums.size(); 
        map<int,vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]].push_back(i);
            if (m[nums[i]].size() > 1)
            {
                for (int j = 0; j < m[nums[i]].size(); j++)
                {
                    for (int r = 0; r < m[nums[i]].size(); r++)
                    {
                        if (j != r && abs(m[nums[i]][j]-m[nums[i]][r]) <= k)
                        {
                            return true;
                        }
                    }
                }
            } 
        }
        return false;     
    }
};
