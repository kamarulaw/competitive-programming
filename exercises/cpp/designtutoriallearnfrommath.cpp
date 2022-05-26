#include <iostream>

using namespace std;

int main() {
  int n; 
  int x; 
  int y; 
  cin >> n; 
  if (n%2 == 0) { 
    x = 4; 
    y = n - 4; 
  } else { 
    x = 9; 
    y = n - x; 
  }
  cout << x << " " << y; 
  return 0; 
}
