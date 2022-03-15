#include <iostream>

using namespace std;

int main() {
  int L, B;
  int yrs = 0; 
  cin >> L >> B; 
  while (L <= B) { 
    L*=3; 
    B*=2; 
    yrs++; 
  }
  cout << yrs; 
  return 0; 
}
