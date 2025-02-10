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
        cin >> n;
        vector<int> seq(n,INT_MIN);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
        }
        int sol = INT_MAX;
        sort(seq.begin(),seq.end());
        for (int j = 1; j < n; j++)
        {
            sol = min(seq[j]-seq[j-1],sol);
        }
        cout << sol << endl;
    }
    return 0;
}
