#include <vector>
#include <map>
#include <iostream>

using namespace std; 

vector<int> uniqueNumbers(vector<int> nums) {
  set<int> unique;
  vector<int> result; 
  map<int, int> m;
  for (int i = 0; i < nums.size(); i++) { 
    if (m[nums[i]] == 0) {
      result.push_back(nums[i]);
      m[nums[i]]++; 
    }
  }
  return result; 
}

int main() { 
  // TEST CASES 
  vector<int> tc1 = {1,4,5,1,3,2,4};
  vector<int> tc1ans = uniqueNumbers(tc1);
  for (int i = 0; i < tc1ans.size(); i++) 
    cout << tc1ans[i] << " " ; 
  cout << endl;   
  return 0; 
}