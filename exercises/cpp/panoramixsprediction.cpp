/* SOLUTION 1 */
/* All tests passed */

#include <cmath>
#include <iostream>
#define ull unsigned long long int

using namespace std;

bool isprime(ull x)
{
    if (x==2)
    {
        return true;
    }
    if (x<2||x%2==0)
    {
        return false;
    }
    for (int i = 3; i <= (int)pow(x,.5); i++)
    {
        if (x%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ull n,m;
    cin >> n >> m;
    int start = n+1;
    while (!(isprime(start)))
    {
        start++;
    }
    if (start==m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
