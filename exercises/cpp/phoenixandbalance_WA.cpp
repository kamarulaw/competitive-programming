#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int t, n, a=0, b=0;
int half; 
vector<int> ns; 
int main(){
    cin >> t; 
    for (int i = 0; i < t; i++) { 
        cin >> n; 
        ns.push_back(n);
    }
    for (int i = 0; i < ns.size(); i++) { 
        n = ns[i];
        b = pow(2, n+1) - 2; 
        if (n % 4 == 0) { 
            int ff = n/2; 
            ff /= 2;
            for (int j = 1; j <= ff; j++) { 
                a += pow(2,j);
            }
            while (ff > 0) { 
                a += pow(2,n-ff+1);
                ff--; 
            }
            b -= a; 
            cout << abs(b-a) << endl; 
        } else { 
            int ff = n / 2; 
            ff /= 2; 
            for (int j = 1; j <= ff+1; j++) {  
                a += pow(2,j);
            }
            while (ff > 0) { 
                a += pow(2,n-ff+1);
                ff--; 
            }
            b -= a; 
            cout << abs(b-a) << endl; 
        }
        a = 0; 
        b = 0; 
    }
    return 0;
}