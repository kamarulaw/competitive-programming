/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s; cin >> s; int sol = s[0]-'0'; sol += s[2]-'0'; cout << sol << endl;
    }
}
