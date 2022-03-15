#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  int n,curr,tot = 0;
  cin >> n; 
  for (int i = 0; i < n; i++) { 
    cin >> curr; 
    tot += curr; 
  }
  if (tot > 0)
    cout << "HARD"; 
  else
    cout << "EASY";
  return 0; 
}
