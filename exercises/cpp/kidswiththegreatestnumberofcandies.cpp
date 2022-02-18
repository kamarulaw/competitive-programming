class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int max_ = candies[0]; 
      vector<bool> result; 
      for (int i = 1; i < candies.size(); i++) 
        max_ = max(max_, candies[i]); 
      for (int i = 0; i < candies.size(); i++) { 
        if (candies[i] + extraCandies >= max_) 
          result.push_back(true); 
        else
          result.push_back(false); 
      }
      return result; 
    }
};