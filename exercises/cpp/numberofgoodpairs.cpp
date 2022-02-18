class Solution {
public:
    int trianglenum(int x) {  
      return (x*(x-1)) / 2; 
    }
  
    int numIdenticalPairs(vector<int>& nums) {
      int ngp = 0; 
      map<int, int> m; 
      for (int val: nums) { 
        m[val]++;
      }
      for (auto it: m) { 
        if (it.second > 1) { 
          ngp += trianglenum(it.second);
        }
      }
      return ngp; 
    }
};