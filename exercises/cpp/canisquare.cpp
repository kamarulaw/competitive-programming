/* SOLUTION 1 */
/* All tests passed */

#include <cmath>
#include <vector>
#include <iostream>
#define ull unsigned long long int
using namespace std;

int main()
{
    ull t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ull n;
        cin >> n;
        ull tot = 0;
        for (int j = 0; j < n; j++)
        {
            ull num;
            cin >> num;
            tot += num;
        }
        if ((int)pow(tot,.5)*pow(tot,.5)==tot)
        {
            cout << "YES" << endl; 
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}
