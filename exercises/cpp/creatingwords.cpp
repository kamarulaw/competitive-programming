/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a,b;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        char c = a[0];
        a[0] = b[0];
        b[0] = c;
        cout << a << " " << b << endl;
    }
}
