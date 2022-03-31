class Solution {
public:
    vector<vector<int>> perms; 
  
    void permutations(int i, vector<int>& nums) { 
      int n = nums.size(); 
      if (i == n-1) { 
        perms.push_back(nums);
        return; 
      }
      for (int j = i; j < n; j++) { 
        swap(nums[i], nums[j]);
        permutations(i+1,nums);
        swap(nums[i], nums[j]);
      }
    }
  
    vector<vector<int>> permute(vector<int>& nums) {
      permutations(0,nums);
      return perms; 
    }
};