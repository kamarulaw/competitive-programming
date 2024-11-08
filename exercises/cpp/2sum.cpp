/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        map<int, int> m; 
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]--;
            if (m[target-nums[i]] >= 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i != j && nums[j] == target-nums[i])
                    {
                        return {i,j};
                    }
                }
            }
            m[nums[i]]++;
        }
        return {};     
    }
};
