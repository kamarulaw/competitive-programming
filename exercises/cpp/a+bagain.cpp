/* SOLUTION 1 */
/* All tests passed */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << x%10 + x/10 << endl;
    }
    return 0;
}
