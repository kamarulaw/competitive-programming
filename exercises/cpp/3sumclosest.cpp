/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 32 of 105 */
class Solution {
public:
    vector<int> nums_;
    set<vector<int>> combinations;
    void generate(int i, int n, vector<int> ss)
    {
        if (ss.size() == 3 || i == n)
        {
            if (ss.size() == 3)
            {
                sort(ss.begin(),ss.end());
                combinations.emplace(ss);
            }
            return;
        }
        generate(i+1,n,ss);
        ss.push_back(nums_[i]);
        generate(i+1,n,ss);
    }
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n = nums.size(); nums_ = nums;
        generate(0,n,{});
        int mindifference = INT_MAX;
        int correspondingsum = INT_MAX;
        vector<vector<int>> vcombinations(combinations.begin(),combinations.end());
        for (int i = 0; i < vcombinations.size(); i++)
        {
            int ccs = 0;
            vector<int> cc = vcombinations[i];
            for (int j = 0; j < cc.size(); j++)
            {
                ccs += cc[j];
            }
            if (abs(ccs - target) < mindifference)
            {
                mindifference = abs(ccs-target);
                correspondingsum = ccs;
            }
        }
        return correspondingsum;
    }
};
