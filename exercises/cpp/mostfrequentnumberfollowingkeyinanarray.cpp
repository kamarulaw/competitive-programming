/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) 
    {
        map<int,int> m;
        int maxcount = INT_MIN;
        int maxcountelem = INT_MIN;
        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i] == key)
            {
                m[nums[i+1]]++;
                if (m[nums[i+1]] > maxcount)
                {
                    maxcount = m[nums[i+1]];
                    maxcountelem = nums[i+1];
                }
            }
        }
        return maxcountelem;    
    }
};
