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
