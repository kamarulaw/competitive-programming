class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      int md = 1e9; 
      int n = arr.size(); 
      sort(arr.begin(), arr.end()); 
      for (int i = 0; i < n - 1; i++) { 
        md = min(md, arr[i+1] - arr[i]);
      }
      vector<int> temp; 
      vector<vector<int>> result; 
      for (int i = 0; i < n-1; i++) { 
        if (arr[i+1] - arr[i] == md) { 
          temp = {arr[i], arr[i+1]};
          result.push_back(temp);
        }
      }
      return result; 
    }
};