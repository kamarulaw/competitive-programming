class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
      int odds = 0; 
      int ans = 0; 
      int n = position.size(); 
      for (int i = 0; i < n; i++) 
        if (position[i] % 2 == 1) 
          odds++; 
      int evens = n - odds; 
      bool moreodds; 
      if (odds > evens) 
        moreodds = true;
      else
        moreodds = false; 
      for (int i = 0; i < n; i++) { 
        if (position[i] % 2 == 0) 
          if (moreodds == true) 
            ans++;
        if (position[i] % 2 == 1) 
          if (moreodds == false) 
            ans++; 
      }
      return ans; 
    }
};