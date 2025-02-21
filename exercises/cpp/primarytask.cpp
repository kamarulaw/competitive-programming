/* SOLUTION 1 */
/* All tests passed */ 

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        if ((a >= 102 && a <= 109) || (a >= 1010 && a <= 1099))
        {
            cout << "YES" << endl;
        }
        else if (a >= 10100 && a <= 10999)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
