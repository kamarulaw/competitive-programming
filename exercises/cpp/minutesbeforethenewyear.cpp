/* SOLUTION 1 */
/* All tests passed */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int h,m;
        cin >> h >> m;
        int sol = 0;
        sol += (60-m);
        sol += (24-h-1)*60;
        cout << sol << endl;
    }
}
