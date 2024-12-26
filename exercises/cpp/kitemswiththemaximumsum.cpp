/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) 
    {
        vector<int> nums;
        for (int i = 0; i < numOnes; i++)
        {
            nums.push_back(1);
        }    
        for (int i = 0; i < numZeros; i++)
        {
            nums.push_back(0);
        }
        for (int i = 0; i < numNegOnes; i++)
        {
            nums.push_back(-1);
        }
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int sol = 0;
        for (int i = 0; i < k; i++)
        {
            sol += nums[i];
        }
        return sol;
    }
};
