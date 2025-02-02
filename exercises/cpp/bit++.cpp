/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[1]=='+')
        {
            val++;
        }
        else 
        {
            val--;
        }
    }
    cout << val;
    return 0;
}
