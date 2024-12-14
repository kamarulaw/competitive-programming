/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        int n = nums.size();
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
            {
                m[nums[i]]++;
            }
        }
        int mf_elem = INT_MAX;
        int mf_count = INT_MIN;
        for (auto it : m)
        {
            if (it.second > mf_count)
            {
                mf_elem = it.first;
                mf_count = it.second;
            }
            else if (it.second == mf_count)
            {
                mf_elem = min(mf_elem, it.first);
            }
        }    
        if (mf_elem == INT_MAX)
        {
            return -1;
        }
        else 
        {
            return mf_elem;
        }
    }
};
