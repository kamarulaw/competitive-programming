#include <vector>
#include <iostream>

using namespace std;

// To execute C++, please define "int main()"
/*

Given an array of integers nums and an integer target, return indices of the two numbers such that #they add up to target.

#You may assume that each input would have exactly one solution.

#You can return the answer in any order.    
### arr  = [2, 7, 11, 15] <----
### target = 18 <---
### return [1,2]

*/

vector<int> twosum(vector<int> arr, int target) { 
  int n = arr.size(); 
  vector<int> res;
  for (int i = 0; i < n; i++) { 
    int sum_ = arr[i];
    for (int j = i+1; j < n; j++) { 
      if (sum_ + arr[j] == target) {
        res.push_back(i);
        res.push_back(j);
        return res;
      }
    }
  }
  return res; 
} 

int main() {
  // Test Case
  vector<int> tc1 = {2,7,11,15};
  int target = 18; 

  // Driver Code
  vector<int> ans = twosum(tc1, target); 

  // Output Solution
  cout << ans[0] << " " << ans[1] << endl; 

  return 0;
}
