/* SOLUTION 1 */
/* All tests passed */

#include <climits>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
    ull t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ull a,b;
        cin >> a >> b;
        cout << b - a << endl;
    }
    
}
