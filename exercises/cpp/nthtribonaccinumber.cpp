class Solution {
public:
    int tribonacci(int n) {
      vector<int> res; 
      res.push_back(0); 
      res.push_back(1);
      res.push_back(1);
      for (int i = 3; i <= n; i++)
        res.push_back(res[i-1] + res[i-2] + res[i-3]);
      return res[n];
    }
};