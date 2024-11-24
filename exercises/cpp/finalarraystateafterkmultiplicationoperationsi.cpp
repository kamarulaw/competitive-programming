/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        int min = INT_MAX;
        int minindex = INT_MAX;
        for (int iter = 0; iter < k; iter++)
        {
            int min_ = INT_MAX;
            int minindex = INT_MAX;
            for (int elemind = 0; elemind < nums.size(); elemind++)
            {
                if (nums[elemind] < min_)
                {
                    min_ = nums[elemind];
                    minindex = elemind;
                }
            }
            nums[minindex] = min_ * multiplier;
        }   
        return nums; 
    }
};
