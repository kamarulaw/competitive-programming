/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,a4;
    string s;
    cin >> a1 >> a2 >> a3 >> a4 >> s;
    int sol = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='1')
        {
            sol += a1;
        }
        else if (s[i]=='2')
        {
            sol += a2;
        }
        else if (s[i]=='3')
        {
            sol += a3;
        }
        else
        {
            sol += a4;
        }
    }
    cout << sol;
}
