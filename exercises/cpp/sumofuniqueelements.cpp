class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      int total = 0; 
      map<int, int> unums; 
      for (int elem: nums) 
        unums[elem]++; 
      for (auto it: unums) { 
        if (it.second == 1) 
          total += it.first; 
      }
      return total; 
    }
};