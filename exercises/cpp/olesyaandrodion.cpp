/* SOLUTION 1 */ 
/* not tested */ 

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int t;
    cin >> n;
    cin >> t;
    int cand = pow(10,n-1);
    bool found = false;
    while (cand < pow(10,n))
    {
        if (cand%t==0)
        {
            cout << cand; return 0;
        }
        else 
        {
            cand++;
        }
    }
    cout << -1; return 0;
}
