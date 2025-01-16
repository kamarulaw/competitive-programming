/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int currsbt = 0;
        vector<int> sbts;
        bool fof = false;
        bool switched = false;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1 && fof == false)
            {
                fof = true; switched = true;
            }
            if (fof && nums[i] == 1 && switched == false)
            {
                sbts.push_back(currsbt); currsbt = 0; 
            }
            if (fof && nums[i] != 1)
            {
                currsbt++;
            }
            switched = false;
        }
        sort(sbts.begin(),sbts.end());
        for (int i = 0; i < sbts.size(); i++)
        {
            if (sbts[i] < k)
            {
                return false;
            }
        }
        return true;
    }
};
