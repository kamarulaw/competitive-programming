class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
      int enlen = encoded.size(); 
      int n = enlen + 1;
      vector<int> result; 
      result.push_back(first);
      for (int i = 1; i < n; i++) { 
        result.push_back(encoded[i-1]^result[i-1]);
      }
      return result; 
    }
};