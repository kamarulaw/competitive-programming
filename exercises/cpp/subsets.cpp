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

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        nums_ = nums; 
        int n = nums_.size(); 
        subsetutil(0,n,{});
        vector<vector<int>> vsubsets(subsets_.begin(), subsets_.end());
        return vsubsets;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> nums_;
    vector<vector<int>> subsets_;

    void generate(int i, int n, vector<int> subset)
    {
        if (i == n)
        {
            subsets_.push_back(subset);
            return;
        }
        generate(i+1,n,subset);
        subset.push_back(nums_[i]);
        generate(i+1,n,subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n = nums.size();
        nums_ = nums;
        generate(0,n,{});
        return subsets_;
    }
};
