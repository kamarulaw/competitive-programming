class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
      int n = prices.size(); 
      vector<int> result; 
      for (int i = 0; i < n; i++) { 
        bool founddiscount = false;
        for (int j = i+1; j < n; j++) { 
          if (prices[j] <= prices[i]) { 
            founddiscount = true; 
            result.push_back(prices[i] - prices[j]); 
            break; 
          }
        }
        if (founddiscount == false) 
          result.push_back(prices[i]);
      }
      return result; 
    }
};