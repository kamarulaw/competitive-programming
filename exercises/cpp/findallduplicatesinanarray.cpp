class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      int curr; 
      vector<int> res; 
      map<int,int> m; 
      for (int i = 0; i < nums.size(); i++) { 
        curr = nums[i];
        m[curr]++; 
        if (m[curr] > 1) 
          res.push_back(curr);
      }
      return res; 
    }
};