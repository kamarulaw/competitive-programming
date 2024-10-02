/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 32 of 84 */
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int i = INT_MAX;
        int j = INT_MAX; 
        int k = INT_MAX;
        int n = nums.size();

        if (n < 3)
        {
            return false;
        }

        int min = nums[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if (nums[i] < nums[j] && nums[j] < nums[k])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
