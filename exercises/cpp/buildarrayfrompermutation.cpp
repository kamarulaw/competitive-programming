class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
      vector<int> ids; 
      vector<int> result; 
      for (int i = 0; i < nums.size(); i++) 
        ids.push_back(nums[i]);
      for (int i = 0; i < nums.size(); i++)
        result.push_back(nums[ids[i]]);
      return result; 
    }
};