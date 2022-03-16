#include <iostream>

using namespace std;

int main() { 
  int n; 
  cin >> n;
  int arr[n];
  int numodds = 0; 
  for (int i = 0; i < n; i++) { 
    cin >> arr[i];
    if (arr[i]%2==1)
      numodds++;
  }
  for (int i = 0; i < n; i++) { 
    if ((numodds > 1 && arr[i]%2==0) || numodds==1 && arr[i]%2==1) { 
      cout << i+1;
      return 0; 
    }
  }
}
