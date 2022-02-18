class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int majtimes = INT_MIN; 
      int maj = 0; 
      map<int, int> m; 
      for (int elem: nums) 
        m[elem]++; 
      for (auto it: m) { 
        if (it.second > majtimes) { 
          majtimes = it.second; 
          maj = it.first; 
        }
      }
      return maj; 
    }
};