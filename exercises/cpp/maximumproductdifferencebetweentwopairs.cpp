class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      int len = nums.size();
      sort(nums.begin(),nums.end());
      return nums[len-1] * nums[len-2] - nums[1]*nums[0];
    }
};