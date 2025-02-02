/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n,p,q;
    cin >> n;
    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        cin >> q;
        if (q-p >= 2)
        {
            sol++;
        }
    }
    cout << sol << endl;
    return 0;
}
