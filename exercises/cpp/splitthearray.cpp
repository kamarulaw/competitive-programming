/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) 
    {
        map<int, int> m;
        int n = nums.size();
        int numevencounts;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++; 
            if (m[nums[i]] >= 3)
            {
                return false;
            }
            if (m[nums[i]] == 2)
            {
                numevencounts++;
            }
        }
        return (m.size() - numevencounts) % 2 == 0;    
    }
};
