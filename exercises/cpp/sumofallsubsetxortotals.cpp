class Solution {
public:
  vector<vector<int>> subsets; 
  void generateSubsets(vector<int> arr, int i, vector<int> subset, int j, int n) {
    if (i == n) { 
      subsets.push_back(subset);
      return; 
    }
    generateSubsets(arr, i+1, subset, j, n);
    subset.push_back(arr[i]);
    generateSubsets(arr, i+1, subset, j+1, n);
  }
  
  int subsetXORSum(vector<int>& nums) {
    int n = nums.size();
    int sum = 0; 
    int csum = 0; 
    vector<int> subset; 
    vector<int> csubset; 
    generateSubsets(nums, 0, subset, 0, n);
    for (int i = 0; i < subsets.size(); i++) {  
      csubset = subsets[i];
      if (csubset.size() == 0)
        continue; 
      csum = 0;
      for (int j = 0; j < csubset.size(); j++) 
        csum ^= csubset[j];
      sum += csum;
    }
    return sum; 
  }
};