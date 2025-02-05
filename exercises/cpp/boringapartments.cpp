/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <climits>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int fd(ull x)
{
    return x%10;
}

int dl(ull x)
{
    int sol = 0;
    while (x > 0)
    {
        sol++;
        x/=10;
    }
    return sol;
}

int main()
{
    ull t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ull x;
        cin >> x;
        int sol = 0;
        sol += (fd(x)-1)*10;
        sol += (dl(x)*(dl(x)+1))/2;
        cout << sol << endl;
    }
    return 0;
}
