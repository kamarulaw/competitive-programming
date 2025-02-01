/* SOLUTION 1 */
/* All tests passed */
#include <cmath>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> row(3,INT_MIN);
    vector<vector<int>> prism(t,row);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> prism[i][j];
        }
        sort(prism[i].begin(),prism[i].end());
        if (prism[i][2]+prism[i][1] >= 10)
        {
            cout << "YES";
        }
        else 
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
