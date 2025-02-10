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
        vector<int> seq(3,0);
        for (int i = 0; i < 3; i++)
        {
            cin >> seq[i];
        }
        cin >> n;
        sort(seq.begin(),seq.end());
        int req1 = seq[2]-seq[0];
        int req2 = seq[2]-seq[1];
        int req = n-req1-req2;
        if (req>=0&&req%3==0)
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
