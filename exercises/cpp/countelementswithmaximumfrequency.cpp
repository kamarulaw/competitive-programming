/* SOLUTION 1 */ 
/* All tests passed  */
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        map<int,int> m;
        int mf = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            mf = max(mf, m[nums[i]]);
        }    
        int count = 0;
        for (auto it : m)
        {
            if (it.second == mf)
            {
                count += it.second;
            }
        }
        return count;
    }
};
