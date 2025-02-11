/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        map<int,int> m;
        int sol = -1;
        for (int j = 0; j < n; j++)
        {
            int n_;
            cin >> n_;
            m[n_]++;
            if (m[n_]==3)
            {
                sol = n_;
            }
        }
        cout << sol << endl;
    }
}
