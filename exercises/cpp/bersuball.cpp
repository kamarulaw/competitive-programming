#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int n, m, tmp, ans=0;
vector<int> boys; 
vector<int> girls; 

int main(){
  cin >> n; 
  for (int i = 0; i < n; i++) {
    cin >> tmp; 
    boys.push_back(tmp);
  }
  cin >> m; 
  for (int i = 0; i < m; i++) { 
    cin >> tmp; 
    girls.push_back(tmp);
  }
  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end()); 
  int dp[n][m]; 
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < m; j++) { 
      dp[i][j] = 0; 
    }
  }
  for (int i = 1; i < n; i++) { 
    for (int j = 1; j < m; j++) { 
      if (abs(boys[i] - girls[j]) <= 1) 
        dp[i][j] = 1; 
      else 
        dp[i][j] = 0; 
    }
  }


  cout << ans << endl; 
  return 0;
}