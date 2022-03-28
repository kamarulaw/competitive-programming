#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int n,temp,res=0; 
vector<int> arr; 
vector<vector<int>> ss; 

void generatess(int i, int n, vector<int> seq) { 
  if (i == n) {
    if (seq.size() > 0) {
      ss.push_back(seq);
    }
    return; 
  }
  generatess(i+1,n,seq);
  seq.push_back(arr[i]);
  generatess(i+1,n,seq);
}

bool ig(vector<int> seq) { 
  for (int i = 0; i < seq.size(); i++) { 
    if (seq[i] % (i+1) != 0) {
      return false; 
    }
  }
  return true; 
}

int main() {
  // Memory Limit Exceeded
  cin >> n; 
  vector<int> seq; 
  for (int i = 0; i < n; i++) {
    cin >> temp; 
    arr.push_back(temp);
  }
  generatess(0,n,seq);
  for (int i = 0; i < ss.size(); i++) { 
    if (ig(ss[i])) { 
      res++; 
    }
  }
  int modulo = pow(10,9) + 7; 
  cout << res % modulo << endl;  
  return 0; 
}