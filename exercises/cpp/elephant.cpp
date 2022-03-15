#include <iostream>

using namespace std;

int main() {
  int x; 
  int numsteps = 0; 
  
  cin >> x; 
  while (x >= 5) { 
    x -= 5; 
    numsteps++; 
  }

  while (x >= 4){ 
    x -= 4; 
    numsteps++; 
  }
  
  while (x >= 3){ 
    x -= 3; 
    numsteps++; 
  }
  
  while (x >= 2){ 
    x -= 2; 
    numsteps++; 
  }
  
  while (x >= 1){ 
    x -= 1; 
    numsteps++; 
  }
  
  cout << numsteps << endl; 
  return 0; 
}
