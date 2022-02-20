#include <iostream>
#include <algorithm>
using namespace std;

int a,b,t; 
int main(){
  cin >> t; 
  for (int i = 0; i < t; i++)  {
    cin >> a >> b; 
    if (b > a) { 
      if (b%2==1 && a%2==0) {
        cout << 1 << endl; 
      } else if (b%2==1 && a%2==1) {
        cout << 2 << endl; 
      } else if (b%2==0 && a%2==0) {
        cout << 2 << endl; 
      } else if (b%2==0 && a%2==1) { 
        cout << 1 << endl; 
      }
    } else if (a == b) { 
      cout << 0 << endl; 
    } else  { 
      if (a%2==0 && b%2==0) {
        cout << 1 << endl; 
      } else if (a%2==0 && b%2==1) { 
        cout << 2 << endl; 
      } else if (a%2==1 && b%2==1) { 
        cout << 1 << endl; 
      } else if (a%2==1 && b%2==0) { 
        cout << 2 << endl; 
      }
    }
  }
  return 0;
}
