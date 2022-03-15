#include <stdlib.h> // has abs
#include <iostream>

using namespace std;

int main() {
  int x,y; 
  int mat[5][5]; 
  for (int i = 0; i < sizeof(mat) / sizeof(mat[0]); i++) { 
    for (int j = 0; j < sizeof(mat[0]) / sizeof(mat[0][0]); j++) { 
      cin >> mat[i][j];
      if (mat[i][j] == 1) {
        x = i; 
        y = j; 
      }
    }     
  }
  cout << abs(x-2) + abs(y-2);
  return 0; 
}
