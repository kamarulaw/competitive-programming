/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) 
    {
        int sol = 0;
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }    
        for (auto it : m)
        {
            if (it.second%k == 0)
            {
                sol += (it.first*it.second);
            }
        }
        return sol;
    }
};
