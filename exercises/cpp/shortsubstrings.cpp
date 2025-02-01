/* SOLUTION 1 */
/* All tests passed */

#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    string sol;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        string sol;
        sol += s[0];
        for (int j = 2; j < s.length()-1; j+=2)
        {
            if (s[j] == s[j-1])
            {
                sol += s[j];
            }
        }
        sol += s[s.length()-1];
        cout << sol << endl;
    }
    return 0;
}
