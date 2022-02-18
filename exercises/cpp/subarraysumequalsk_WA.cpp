class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int ans = 0; 
      int csum = 0; 
      int n = nums.size();
      vector<int> zs; 
      for (int i = 0; i < n; i++) { 
        if (nums[i] == 0)  
          zs.push_back(1);
        else
          zs.push_back(0);
      }
      
      for (int i = 0; i < n; i++) { 
        int j = i; 
        while (j < n) { 
          csum += nums[j];
          if (csum == k) { 
            ans++; 
            j++; 
            while (j < n && zs[j] == 1) { 
              ans++; 
              j++; 
            }
            csum = 0; 
            break; 
          }
          j++;
        }
        csum = 0; 
      }
      return ans; 
    }
};