class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int csum = 0; 
      int max_ = 0; 
      for (int i = 0; i < gain.size(); i++) { 
        csum += gain[i];
        max_ = max(max_, csum);
      }
      return max_; 
    }
}; 