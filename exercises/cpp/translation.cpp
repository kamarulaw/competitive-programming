/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    string s;
    string s1;
    cin >> s;
    cin >> s1;
    string t = s;
    reverse(t.begin(),t.end());
    if (t.compare(s1) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
