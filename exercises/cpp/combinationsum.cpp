/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> candidates_;
    set<vector<int>> sombinations;

    void combinationutil(int target, vector<int> subset)
    {
        if (target == 0)
        {
            sort(subset.begin(), subset.end());
            sombinations.emplace(subset);
            return;
        }
        else if (target < 0)
        {
            return;
        }
        else 
        {
            for (int i = 0; i < candidates_.size(); i++)
            {
                subset.push_back(candidates_[i]); 
                combinationutil(target-candidates_[i], subset);
                subset.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        candidates_ = candidates;
        combinationutil(target, {});
        vector<vector<int>> combinations(sombinations.begin(),sombinations.end());
        return combinations;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> nums_;
    set<vector<int>> answer;

    void generate(vector<int> subset, int target) 
    {
        if (target == 0)
        {
            sort(subset.begin(),subset.end());
            answer.emplace(subset);
            return;
        }
        if (target < 0)
        {
            return;
        }
        if (target > 0)
        {
            for (int i = 0; i < nums_.size(); i++)
            {
                if (target-nums_[i] >= 0)
                {
                    subset.push_back(nums_[i]);
                    generate(subset,target-nums_[i]);
                    subset.pop_back();
                }
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        nums_ = nums;
        generate({},target);
        vector<vector<int>> vanswer(answer.begin(),answer.end());
        return vanswer;
    }
};

