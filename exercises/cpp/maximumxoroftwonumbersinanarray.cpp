/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 41 of 45 */
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) 
    {
        if (nums.size() == 1)
        {
            return 0;
        }
        int n = nums.size();
        int m = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                m = max(m,nums[i] ^ nums[j]);
            }
        }    
        return m;
    }
};
