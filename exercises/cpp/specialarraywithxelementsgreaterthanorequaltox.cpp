/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        int n = nums.size();
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for (int x = 0; x <= n; x++)
        {
            int count = 0;
            for (auto it: m)
            {
                if (it.first >= x)
                {
                    count += it.second;
                }
            }
            if (x == count)
            {
                return x;
            }
        }
        return -1;
    }
};
