/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <iostream>

using namespace std;

string newf(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i-1])
        {
            s.erase(s.begin() + i);
            return s;
        }
    }
    return s;
}
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int sol = 0;
    while (s != newf(s))
    {
        sol++;
        s = newf(s);
    }
    cout << sol;
    return 0;
}
