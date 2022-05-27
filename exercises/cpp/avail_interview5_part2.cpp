#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> ss; 

float average(vector<int> nums) { 
  int n = nums.size(); 
  int tot = 0.0; 
  for (int i = 0; i < n; i++) { 
    tot += nums[i]; 
  }
  return (double)tot / n; 
}

void generatess(int i, int n, vector<int> arr, vector<int> seq) { 
  if (i == n) {
    if (seq.size() > 0) {
      ss.push_back(seq);
    }
    return; 
  }
  generatess(i+1,n,arr,seq);
  seq.push_back(arr[i]);
  generatess(i+1,n,arr,seq);
}

int main() {
  // Test Case 
  vector<int> tc1 = {1,2,3,4,4};
  int n = tc1.size(); 
  double avg = 2.8; 
  
  // Driver Code
  vector<int> sequence; 
  generatess(0,n,tc1,sequence);
  vector<vector<int>> result; 
  for (int i = 0; i < ss.size(); i++) { 
    if (average(ss[i]) == avg) {
      result.push_back(ss[i]);
    }
  }
  return 0; 
}
