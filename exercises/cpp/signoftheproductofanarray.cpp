class Solution {
public:
    int arraySign(vector<int>& nums) {
      int nneg = 0;
      int npos = 0; 
      int nz = 0; 
      for (int i = 0; i < nums.size(); i++) { 
        int elem = nums[i]; 
        if (elem == 0)
          return 0; 
        if (elem > 0) { 
          npos++; 
        } else { 
          nneg++; 
        }
      }
      if (nneg % 2 == 0) 
        return 1; 
      else
        return -1; 
    }
};