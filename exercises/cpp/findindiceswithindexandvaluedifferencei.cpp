/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) 
    {
        int n = nums.size();
        vector<int> sol(2,-1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(i-j) >= indexDifference && abs(nums[i] - nums[j]) >= valueDifference)
                {
                    sol[0] = i;
                    sol[1] = j;
                    return sol;
                }
            }
        }
        return sol;
    }
};
