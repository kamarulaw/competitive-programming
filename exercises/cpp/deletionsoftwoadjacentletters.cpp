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
        string s;
        char c;
        cin >> s;
        cin >> c;
        bool flag = true;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j]==c)
            {
                if (j%2==0)
                {
                    cout << "YES" << endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
