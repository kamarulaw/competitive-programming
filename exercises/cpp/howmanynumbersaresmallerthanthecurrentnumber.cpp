class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      int ng = 0; 
      int n = nums.size(); 
      vector<int> res; 
      for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
          if (i != j) { 
            if (nums[i] > nums[j]) { 
              ng++; 
            }
          }
        }
        res.push_back(ng);
        ng = 0; 
      }
      return res; 
    }
};