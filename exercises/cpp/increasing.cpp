/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,n_;
        cin >> n;
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> n_;
            m[n_]++;
        }
        bool flag = true;
        for (auto it : m)
        {
            if (it.second > 1)
            {
                flag = false; 
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
