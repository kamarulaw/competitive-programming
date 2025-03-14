/* SOLUTION 1 */
/* psf */

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a,b;
        cin >> a >> b;
        int sol = a^0;
        sol += b^0;
        for (int i = 0; i <= 2*max(a,b); i++)
        {
            sol = min(sol,a^i+b^i);
        }
        cout << sol << endl;
    }
}
