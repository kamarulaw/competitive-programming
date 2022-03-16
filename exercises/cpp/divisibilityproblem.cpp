#include <iostream>

using namespace std;

struct AB { 
  int A;
  int B; 
  int num_increments = 0; 
}; 

int sol1() {
  // Time Limit Exceeded 
  int n; 
  cin >> n; 
  AB tuples[n];
  for (int i = 0; i < n; i++) {
    cin >> tuples[i].A; 
    cin >> tuples[i].B;
    while (tuples[i].A % tuples[i].B != 0) { 
      tuples[i].A++; 
      tuples[i].num_increments++;
    }
    cout << tuples[i].num_increments << endl; 
  }
  return 0; 
}

int main() { 
  int a,b,n;
  cin >> n; 
  for (int i = 0; i < n; i++) { 
    cin >> a >> b; 
    if (a%b == 0) { 
      cout << 0 << endl; 
    } else { 
      int tmp = a/b; 
      tmp++; 
      cout << tmp*b - a << endl; 
    }
  }
  return 0; 
}
