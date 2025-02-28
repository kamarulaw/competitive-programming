/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int sumOfSquares(vector<int>& nums) 
    {
        int n = nums.size();
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            if (n%(i+1)==0)
            {
                sol+=(nums[i]*nums[i]);
            }
        }    
        return sol;
    }
};
