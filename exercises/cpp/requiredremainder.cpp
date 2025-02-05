/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 2 */

#include <cmath>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
    ull t,x,y,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> n;
        for (int k = n; k >= 0; k--)
        {
            if (k%x==y)
            {
                cout << k << endl; break;
            }
        }
    }
    return 0;
}
