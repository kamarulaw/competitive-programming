/* SOLUTION 1 */ 
/* All tests passed */

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) 
    {
        int sol = INT_MAX;
        int n = nums.size();
        for (int i = 0; i <= start; i++)
        {
            if (nums[i]==target)
            {
                sol = min(sol,abs(i-start));
            }
        }
        for (int i = start+1; i < n; i++)
        {
            if (nums[i]==target)
            {
                sol = min(sol,abs(i-start));
            }
        }    
        return sol;
    }
};
