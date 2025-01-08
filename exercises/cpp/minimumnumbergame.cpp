/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) 
    {
        vector<int> sol;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() / 2; i++)
        {
            sol.push_back(nums[2*i+1]);
            sol.push_back(nums[2*i]);
        }   
        return sol;
    }
};
