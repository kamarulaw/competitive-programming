/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum_ = nums[0];
        int min_ = sum_;

        vector<int> sbss; 
        sbss.push_back(sum_);
        for (int i = 1; i < nums.size(); i++)
        {
            sum_ += nums[i];
            min_ = min(min_,sum_);
            sbss.push_back(sum_);
        }

        if (min_ > 0)
        {
            return 1;
        }
        else
        {
            return -1*min_ + 1;
        }
    }
};
