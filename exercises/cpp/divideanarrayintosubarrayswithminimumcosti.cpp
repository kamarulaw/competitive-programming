/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumCost(vector<int>& nums) 
    {
        int n = nums.size();    
        int start = nums[0];
        int sol = start;
        reverse(nums.begin(), nums.end());
        nums.erase(nums.end());
        int min_ = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            min_ = min(min_, nums[i]);
        }
        sol += min_;
        sort(nums.begin(), nums.end()); reverse(nums.begin(), nums.end());
        nums.erase(nums.end());
        min_ = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            min_ = min(min_, nums[i]);
        }
        sol += min_;
        return sol;
    }
};
