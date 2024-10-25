/* SOLUTION 1 */ 
/* MEMORY LIMIT EXCEEDED ON CASE 23 of 176 */
class Solution {
public:
    vector<int> candidates_;
    set<vector<int>> sombinations;

    void combinationutil(int i, int n, vector<int> subset, int target)
    {
        if (i <= n && target == 0)
        {
            sort(subset.begin(), subset.end());
            sombinations.emplace(subset);
            return;
        }

        if (i == n)
        {
            return;
        }
        combinationutil(i+1, n, subset, target);
        subset.push_back(candidates_[i]);
        combinationutil(i+1, n, subset, target - candidates_[i]);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        candidates_ = candidates;
        int n = candidates.size();
        combinationutil(0, n, {}, target);
        vector<vector<int>> combinations(sombinations.begin(), sombinations.end());
        return combinations;
    }
};
