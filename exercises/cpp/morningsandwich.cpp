/* SOLUTION 1 */
/* All tests passed */

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
        int b,c,h;
        cin >> b >> c >> h;
        int sol = 0;
        int fil = c + h;
        b -= 2;
        sol += 2;
        sol += 1;
        fil -= 1;
        sol += 2*min(fil,b);
        cout << sol << endl;
    }
}
