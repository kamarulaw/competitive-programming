/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <string>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    map<char,int> m;
    for (int j = 0; j < n; j++)
    {
        m[s[j]]++;
    }
    int zc = m['z'];
    int oc = m['n'];
    for (int j = 0; j < oc; j++)
    {
        cout << 1 << " ";
    }
    for (int j = 0; j < zc; j++)
    {
        cout << 0 << " ";
    }
}
