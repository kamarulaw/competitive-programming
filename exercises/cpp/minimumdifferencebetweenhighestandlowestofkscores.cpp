/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        int sol = INT_MAX;
        int n = nums.size();
        if (n==1)
        {
            return 0; 
        }
        sort(nums.begin(),nums.end());
        int i = 0; 
        while (i <= n-k)
        {
            sol = min(sol,nums[i+k-1]-nums[i]); i++;
        }  
        return sol; 
    }
};
