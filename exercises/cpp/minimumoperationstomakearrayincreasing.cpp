class Solution {
public:
    int minOperations(vector<int>& nums) {
      int inc = 0; 
      int mvs = 0; 
      for (int i = 1; i < nums.size(); i++) { 
        if (nums[i] > nums[i-1]) {
          continue; 
        } else { 
          inc = nums[i-1] - nums[i] + 1; 
          nums[i] += inc; 
          mvs += inc;
        }
      }
      return mvs; 
    }
};