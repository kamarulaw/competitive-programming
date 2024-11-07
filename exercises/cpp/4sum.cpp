/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 138 of 294 */
class Solution {
public:
    vector<int> nums_;
    set<vector<int>> answer;
    void combinations(int i, int n, int target, vector<int> ss)
    {
        if (i == n)
        {
            if (target == 0 && ss.size() == 4)
            {
                sort(ss.begin(),ss.end());
                answer.emplace(ss);
            }
            return;
        }
        combinations(i+1,n,target,ss);
        ss.push_back(nums_[i]);
        combinations(i+1,n,target-nums_[i],ss);
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        nums_ = nums; int n = nums.size();
        combinations(0,n,target,{});
        vector<vector<int>> vanswer(answer.begin(),answer.end());
        return vanswer;    
    }
};

/* SOLUTION 2 */
/* TIME LIMIT EXCEEDED ON CASE 218 of 294 */ 
class Solution {
public:
    vector<int> nums_;
    set<vector<int>> answer;
    void combinations(int i, int n, int target, vector<int> ss)
    {
        if (i == n)
        {
            if (target == 0 && ss.size() == 4)
            {
                sort(ss.begin(),ss.end());
                answer.emplace(ss);
            }
            return;
        }
        if (ss.size() > 4)
        {
            return;
        }
        combinations(i+1,n,target,ss);
        ss.push_back(nums_[i]);
        combinations(i+1,n,target-nums_[i],ss);
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        nums_ = nums; int n = nums.size();
        combinations(0,n,target,{});
        vector<vector<int>> vanswer(answer.begin(),answer.end());
        return vanswer;    
    }
};
