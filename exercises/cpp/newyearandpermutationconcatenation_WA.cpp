#include <vector>
#include <iostream>

using namespace std;

int n; 
int sum_of_interest; 
vector<int> arr; 
vector<int> big_sequence; 

void permutations(int i, int n) { 
  if (i == n-1) { 
    for (int ind = 0; ind < arr.size(); ind++) 
      big_sequence.push_back(arr[ind]);
  }
  for (int j = i; j < n; j++) { 
    swap(arr[i], arr[j]);
    permutations(i+1, n);
    swap(arr[i], arr[j]);
  }
}

int subArrSum(int i) { 
  int res = 0; 
  if (i+n >= big_sequence.size()) 
    return -1; 
  for (int ind = i; ind < i+n; ind++)  
    res += big_sequence[ind]; 
  return res; 
}

int main() {
  cin >> n; 
  int res = 0; 
  for (int i = 1; i <= n; i++)
    arr.push_back(i);
  permutations(0,n);
  sum_of_interest = (n*(n+1))/2; 
  for (int i = 0; i < big_sequence.size(); i++) { 
    if (subArrSum(i) == sum_of_interest) { 
      res += 1; 
    }
  }
  cout << res % 998244353 << endl; 
  return 0; 
}