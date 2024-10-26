/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int elem; vector<int> nums_ = nums; sort(nums_.begin(),nums_.end()); 
        if (nums_[nums_.size()-1] >= 2*nums_[nums_.size()-2]){elem = nums_[nums_.size()-1]; for (int i = 0; i < nums.size(); i++) { if (nums[i] == elem) {return i;}}}return -1;
    }
};
