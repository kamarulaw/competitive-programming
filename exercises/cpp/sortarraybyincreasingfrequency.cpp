class Solution {
public:
    static bool comp(vector<int> a, vector<int> b) { 
      int as = a.size(); 
      int bs = b.size(); 
      int ae = a[0]; 
      int be = b[0];
      if (as < bs) {
        return true; 
      } else if (as > bs){ 
        return false; 
      } else {
        return ae > be; 
      }
    }
    vector<int> frequencySort(vector<int>& nums) {
      int n = nums.size(); 
      int idx = 0; 
      sort(nums.begin(), nums.end());
      vector<vector<int>> nums_; 
      while (idx < n) { 
        int elem = nums[idx];
        vector<int> temp; 
        while (idx < n && nums[idx] == elem) { 
          temp.push_back(nums[idx]);
          idx++; 
        }
        nums_.push_back(temp);
      }
      sort(nums_.begin(), nums_.end(), comp);
      
      vector<int> temp, result; 
      for (int i = 0; i < nums_.size(); i++) { 
        temp = nums_[i];
        for (int j = 0; j < temp.size(); j++) { 
          result.push_back(temp[j]);
        }
      }
      return result; 
    }
};