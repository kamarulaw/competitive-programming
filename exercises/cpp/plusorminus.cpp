/* SOLUTION 1 */
/* All tests passed */

#include <iostream>

using namespace std;

int main()
{
    int t,a,b,c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << '+';
        }
        else 
        {
            cout << '-';
        }
        cout << endl;
    }
    return 0;
}
