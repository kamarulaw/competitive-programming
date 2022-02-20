#include <iostream>
using namespace std;

int n,m; 
int dfs(int n, int m, int count) { 
  if (n == m)
    return count; 
  return min(dfs(2*n,m,count+1), dfs(n-1,m,count+1));
}
int main(){
  cin >> n >> m; 
  cout << dfs(n,m,0) << endl;
  return 0;
}
