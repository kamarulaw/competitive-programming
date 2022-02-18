class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int maxw = 0;
      int tempw = 0; 
      vector<int> cust0 = accounts[0]; 
      for (int j = 0; j < cust0.size(); j++) 
        maxw += cust0[j];
      for (int i = 1; i < accounts.size(); i++) { 
        tempw = 0; 
        for (int j = 0; j < accounts[i].size(); j++)
          tempw += accounts[i][j];
        maxw = max(maxw, tempw);
      }
      return maxw; 
    }
};