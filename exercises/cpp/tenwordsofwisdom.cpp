/* SOLUTION 1 */
/* All tests passed */ 

#include <cmath>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

static bool comp(vector<int> _ab1,vector<int> _ab2)
{
    return _ab1[1] >= _ab2[1];
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<vector<int>> _abs;
        for (int j = 0; j < n; j++)
        {
            int a,b;
            cin >> a >> b;
            if (a<=10)
            {
                _abs.push_back({a,b,1+j});
            }
            sort(_abs.begin(),_abs.end(),comp);
        }
        cout << _abs[0][2] << endl;
    }
}
