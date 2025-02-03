/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <iostream>

using namespace std;

bool distinct(int x) 
{
    map<int,int> m;
    while (x>0)
    {
        m[x%10]++;
        x /= 10;
    }
    for (auto it : m)
    {
        if (it.second > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    n++;
    while (!(distinct(n)))
    {
        n++;
    }
    cout << n << endl;
    return 0;
}
