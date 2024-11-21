/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        while (m[original] >= 1)
        {
            original *= 2;
        }    
        return original;
    }
};
