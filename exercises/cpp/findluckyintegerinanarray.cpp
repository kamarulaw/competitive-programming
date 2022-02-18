class Solution {
public:
    int findLucky(vector<int>& arr) {
      int res = -1; 
      map<int, int> m; 
      for (int elem: arr) { 
        m[elem]++; 
      }
      for (auto it: m) { 
        if (it.first == it.second && it.first > res) 
          res = it.first; 
      }
      return res; 
    }
};