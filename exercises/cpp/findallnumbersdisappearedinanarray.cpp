class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      int n = nums.size();
      map<int, int> m; 
      vector<int> res; 
      vector<int> naturals; 
      sort(nums.begin(), nums.end());
      for (int i = 0; i < n; i++) 
        m[i+1] = 0; 
      for (int i = 0; i < n; i++) 
        m[nums[i]]++; 
      for (auto it: m) { 
        if (it.second == 0) { 
          res.push_back(it.first);
        }
      }
      return res; 
    }
};