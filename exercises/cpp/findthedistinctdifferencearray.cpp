/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> diff(n,0); 
        for (int i = 0; i < n; i++)
        {
            set<int> prefix;
            set<int> suffix;
            for (int ii = 0; ii <= i; ii++)
            {
                prefix.insert(nums[ii]);
            }
            for (int ii = i+1; ii < n; ii++)
            {
                suffix.insert(nums[ii]);
            }
            diff[i] = prefix.size() - suffix.size();
        }
        return diff;
    }
};
