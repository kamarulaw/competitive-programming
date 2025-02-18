/* SOLUTION 1 */
/* All tests passed */

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int x = 0;
        int y = 0;
        bool candypassed = false;
        string s;
        cin >> n >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j]=='L')
            {
                x--;
            }
            if (s[j]=='R')
            {
                x++;
            }
            if (s[j]=='U')
            {
                y++;
            }
            if (s[j]=='D')
            {
                y--;
            }
            if (x==1&&y==1)
            {
                candypassed = true;
            }
        }
        
        if (candypassed)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
