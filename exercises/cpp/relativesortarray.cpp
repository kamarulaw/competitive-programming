class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      map<int, int> m1; 
      map<int, int> m2;
      vector<int> result; 
      vector<int> leftover; 
      for (int i = 0; i < arr2.size(); i++) { 
        m2[arr2[i]]++; 
      }
      for (int i = 0; i < arr1.size(); i++) { 
        if (m2[arr1[i]] > 0)
          m1[arr1[i]]++; 
        else
          leftover.push_back(arr1[i]);
      }
      for (int i = 0; i < arr2.size(); i++) { 
        int num = m1[arr2[i]]; 
        for (int j = 0; j < num; j++) { 
          result.push_back(arr2[i]);
        }
      }
      sort(leftover.begin(), leftover.end()); 
      for (int i = 0; i < leftover.size(); i++) { 
        result.push_back(leftover[i]);
      }
      return result; 
    }
};