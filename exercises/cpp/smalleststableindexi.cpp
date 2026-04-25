/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> b;
        vector<int> e;
        for (int i = 0; i < n; i++)
        {
            b.clear();
            e.clear();

            // forgot vector subset code 
            for (int ii = 0; ii <= i; ii++)
            {
                b.push_back(nums[ii]);
            }

            for (int ii = i; ii < n; ii++)
            {
                e.push_back(nums[ii]);
            }

            sort(b.begin(), b.end());
            sort(e.begin(), e.end());

            int curr_is = b[b.size()-1] - e[0];
            if (curr_is <= k)
            {
                return i;
            }
        }
        return -1;
    }
};
