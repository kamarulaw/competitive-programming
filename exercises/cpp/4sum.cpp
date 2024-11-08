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

/* SOLUTION 3 */
/* TIME LIMIT EXCEEDED ON CASE 249 of 294 */ 
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        } 
        set<vector<int>> answer;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                for (int k = 0; k < nums.size(); k++)
                {
                    if (i != j && j != k && i != k)
                    {
                        m[nums[i]]--; 
                        m[nums[j]]--;
                        m[nums[k]]--;
                        if (m[target-nums[i]-nums[j]-nums[k]] >= 1)
                        {
                            vector<int> ss = {nums[i],nums[j],nums[k],target-nums[i]-nums[j]-nums[k]};
                            sort(ss.begin(),ss.end());
                            answer.emplace(ss);
                        }
                        m[nums[i]]++;
                        m[nums[j]]++;
                        m[nums[k]]++;
                    }
                }
            }
        } 
        vector<vector<int>> vanswer(answer.begin(),answer.end());
        return vanswer;  
    }
};
