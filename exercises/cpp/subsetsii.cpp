/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> nums_;
    set<vector<int>> subsets_;
    void subsetutil(int i, int n, vector<int> ss)
    {
        if (i == n)
        {
            sort(ss.begin(), ss.end());
            subsets_.emplace(ss);
            return;
        }

        subsetutil(i+1,n,ss);
        ss.push_back(nums_[i]);
        subsetutil(i+1,n,ss);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        nums_ = nums;
        int n = nums.size();
        subsetutil(0,n,{});
        vector<vector<int>> vsubsets(subsets_.begin(), subsets_.end());
        return vsubsets;
    }
};
