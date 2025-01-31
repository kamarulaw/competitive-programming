/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int consec = 1;
    int n = s.length();
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i-1])
        {
            consec++;
        }
        else 
        {
            consec = 1;
        }
        if (consec == 7)
        {
            cout << "YES"; 
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
