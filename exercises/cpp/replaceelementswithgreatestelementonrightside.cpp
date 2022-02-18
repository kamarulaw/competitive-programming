class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int n = arr.size();
      int max_; 
      vector<int> result; 
      for (int i = 0; i < n-1; i++) { 
        for (int j = i+1; j < n; j++) { 
          if (j == i+1)
            max_ = arr[j];
          else
            max_ = max(max_, arr[j]);
        }
        result.push_back(max_);
      }
      result.push_back(-1);
      return result; 
    }
};