#include <string.h>
#include <iostream>

using namespace std;

int sol1() {
  // Time Limit Exceeded
  int n,k; 
  int arr[10]; 
  cin >> n >> k; 
  memset(arr, 0, sizeof(arr));
  int ind = 0; 
  for (int i = 1; i <= n; i++) { 
    if (i%2 == 1) { 
      arr[ind] = i; 
      ind++;
    }
  }
  for (int i = 2; i <= n; i++) { 
    if (i%2 == 0) { 
      arr[ind] = i; 
      ind++;
    }
  }
  cout << arr[k-1];
  return 0; 
}

int main() { 
  long long n,k; 
  cin >> n >> k; 
  if (n % 2 == 1) { 
    if (k <= n/2) { 
      cout << 2*k-1; 
    } else if (k == n/2 + 1) { 
      cout << n; 
    } else { 
      cout << (k - n/2 - 1)*2; 
    }
  } else { 
    if (k <= n/2) { 
      cout << 2*k-1; 
    } else { 
      cout << (k - n/2)*2; 
    }
  }
  return 0; 
}
