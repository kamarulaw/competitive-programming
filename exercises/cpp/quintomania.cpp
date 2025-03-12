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
        vector<int> ss;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            ss.push_back(num);
        }
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            
            if (abs(ss[i]-ss[i+1])!=7&&abs(ss[i]-ss[i+1])!=5)
            {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
