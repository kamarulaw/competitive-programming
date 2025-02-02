/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main() 
{
    string s;
    cin >> s;
    int n = s.length();
    int lc = 0;
    int uc = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] - 'a' >= 0)
        {
            lc++;
        }
        else
        {
            uc++;
        }
    }
    string sol = "";
    for (int i = 0; i < n; i++)
    {
        if (lc >= uc)
        {
            sol += tolower(s[i]);
        }
        else
        {
            sol += toupper(s[i]);
        }
    }
    cout << sol;
    return 0;
}
