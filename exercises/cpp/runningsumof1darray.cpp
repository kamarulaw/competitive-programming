class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      int tot = nums[0]; 
      vector<int> result; 
      result.push_back(tot);
      for (int i = 1; i < nums.size(); i++) { 
        tot += nums[i]; 
        result.push_back(tot);
      }
      return result; 
    }
};