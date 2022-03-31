class Solution {
public:
    set<vector<int>> perms; 
    void permutations(int i, vector<int>& nums) { 
      int n = nums.size(); 
      if (i == n-1) { 
        perms.insert(nums);
        return; 
      }
      for (int j = i; j < n; j++) { 
        swap(nums[i], nums[j]);
        permutations(i+1,nums);
        swap(nums[i], nums[j]);
      }
    }
  
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      vector<vector<int>> res; 
      permutations(0,nums);
      for (auto elem: perms)
        res.push_back(elem);
      return res; 
    }
};