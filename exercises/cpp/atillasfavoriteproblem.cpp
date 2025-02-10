/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <cmath>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin >> n >> s;
        int sol = 1;
        for (int j = 0; j < n; j++)
        {
            sol = max(sol,1+s[j]-'a');
        }
        cout << sol << endl;
    }
}
