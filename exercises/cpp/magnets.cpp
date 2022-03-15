#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  int n;
  int res = 0; 
  string current; 
  vector<string> magnets; 
  cin >> n; 
  for (int i = 0; i < n; i++) { 
    cin >> current; 
    if (i == 0 || current.compare(magnets[i-1]) != 0)
      res++; 
    magnets.push_back(current);
  }
  cout << res << endl; 
  return 0; 
}
