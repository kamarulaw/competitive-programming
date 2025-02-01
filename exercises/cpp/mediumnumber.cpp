/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    int num;
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
        cout << prism[i][1] << endl;
        
    }
    return 0;
}
