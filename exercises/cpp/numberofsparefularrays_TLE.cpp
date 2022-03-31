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
        permutations(i+1, nums);
        swap(nums[i], nums[j]);
      }
    }
  
    bool isPerfectSquare(int x) { 
      int sq = sqrt(x)+1; 
      for (int i = 1; i <= sq; i++) { 
        if (pow(i,2) == x)
          return true; 
      }
      return false; 
    }
    
    bool isSpareful(vector<int> seq) { 
      for (int i = 0; i < seq.size() - 1; i++)
        if (!isPerfectSquare(seq[i] + seq[i+1])) { 
          return false; 
        }
      return true; 
    }
  
    int numSquarefulPerms(vector<int>& nums) {
      // Time Limit Exceeded on case 12/76
      int res = 0; 
      vector<vector<int>> perms_; 
      permutations(0,nums);
      for (auto elem: perms)
        perms_.push_back(elem);
      for (auto elem: perms_) { 
        if (isSpareful(elem))
          res++; 
      }
      return res; 
    }
};