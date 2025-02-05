/* SOLUTION 1 */
/* All tests passed */

#include <climits>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
    ull t,a,b,c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << "STAIR";
        }
        else if (a < b && b > c)
        {
            cout << "PEAK";
        }
        else 
        {
            cout << "NONE";
        }
        cout << endl;
    }
}
