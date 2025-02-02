/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        {
            cout << "yes";
        }
        else 
        {
            cout << "no";
        }
        cout << endl;
    }
    return 0;
}
