class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) { 
      sort(arr.begin(), arr.end());
      int idx = 0; 
      int weight = 0; 
      int apples = 0; 
      while(idx < arr.size() && weight <= 5000) { 
        if (weight + arr[idx] <= 5000) { 
          apples++; 
          weight += arr[idx];
        } else { 
          return apples; 
        }
        idx++; 
      }
      return apples; 
    }
};