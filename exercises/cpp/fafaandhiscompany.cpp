/* SOLUTION 1 */
/* All tests passed */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sol = 0;
    for (int i = 1; i < n; i++)
    {
        if ((n-i)%i==0)
        {
            sol++;
        }
    }
    cout << sol << endl;
}
