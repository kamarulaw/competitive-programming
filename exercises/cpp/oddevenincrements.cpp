/* SOLUTION 1 */
/* All tests passed */

#include <vector>
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
        vector<int> seq(n,0);
        for (int j = 0; j < n; j++)
        {
            cin >> seq[j];
        }
        bool ep = true;
        bool op = true;
        for (int j = 0; j < n; j++)
        {
            if (j%2==0&&seq[j]%2!=seq[0]%2)
            {
                op=false;
            }
            if (j%2==1&&seq[j]%2!=seq[1]%2)
            {
                ep=false;
            }
        }
        if (op&&ep)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
