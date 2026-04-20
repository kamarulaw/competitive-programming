/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int max = nums[n-1];   
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            sol += (max-nums[i]);
        } 
        return sol;
    }
};
