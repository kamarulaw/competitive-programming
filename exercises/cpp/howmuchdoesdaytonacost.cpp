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
        int n,k;
        cin >> n >> k;
        bool flag = false;
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
            if (seq[j]==k)
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES";
        }
        else 
        {
            cout << "NO";
        }
        cout << endl;
    }
}
