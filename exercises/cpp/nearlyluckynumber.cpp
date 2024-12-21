/* SOLUTION 1 */
/* All tests passed */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int nld = 0;
    unsigned long long n; cin >> n;
    unsigned long long num = n;
    while (num > 0)
    {
        if (num % 10 == 7 || num % 10 == 4)
        {
            nld++;
        }
        num /= 10;
    }
    if (nld == 0)
    {
        cout << "NO"; return 0;
    }
    while (nld > 0)
    {
        if (nld % 10 != 7 && nld % 10 != 4)
        {
            cout << "NO"; return 0;
        }
        nld /= 10;
    }
    cout << "YES"; return 0;
}
