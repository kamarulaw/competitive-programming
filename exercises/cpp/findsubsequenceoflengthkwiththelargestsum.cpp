class Solution {
public:

    vector<int> maxSubsequence(vector<int>& nums, int k) {
      vector<int> res; 
      map<int, int> m;
      priority_queue<int> pq;  
      
      for (int x: nums) 
        pq.push(x);
     
      int kc = k;
      while (kc != 0) { 
        m[pq.top()]++;
        pq.pop(); 
        kc--; 
      }
      
      for (int i = 0; i < nums.size(); i++) { 
        if (res.size() == k)
          break; 
        if (m[nums[i]] > 0) { 
          res.push_back(nums[i]);
          m[nums[i]]--; 
        }
      }
      return res; 
    }     
};