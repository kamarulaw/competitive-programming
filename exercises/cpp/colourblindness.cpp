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
        int cols; cin >> cols; string row1; string row2; cin >> row1 >> row2; bool flag = true;
        for (int j = 0; j < cols; j++)
        {
            if (row1[j]!=row2[j])
            {
                if (row1[j]=='R' || row2[j]=='R')
                {
                    flag = false;
                }
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
