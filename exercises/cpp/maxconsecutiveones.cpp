/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size();
        int consec = 0;
        int maxnum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                consec++;
            }
            if (nums[i] == 0)
            {
                consec = 0;
            }
            maxnum = max(maxnum, consec);
        }
        return maxnum;    
    }
};
