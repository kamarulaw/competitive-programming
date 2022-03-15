#include <string>
#include <iostream>

using namespace std;

int main() {
  int n;
  int anton = 0; 
  string s; 
  
  cin >> n >> s; 
  for (int i = 0; i < n; i++) { 
    if (s[i] == 'A')
      anton++; 
  }
  
  if (anton > n - anton) 
    cout << "Anton";
  else if (n - anton > anton)
    cout << "Danik";
  else 
    cout << "Friendship";
  return 0; 
}
