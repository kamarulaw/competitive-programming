/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) 
    {
        int sol = 0;
        map<int,int> m;
        vector<int> newarr;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }    
        for (auto it : m)
        {
            int incby = it.second / 2;
            sol += incby;
            it.second -= incby*2;
            for (int i = 0; i < it.second; i++)
            {
                newarr.push_back(it.first);
            }
        }
        return {sol, (int)newarr.size()};
    }
};
