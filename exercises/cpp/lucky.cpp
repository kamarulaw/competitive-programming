/* SOLUTION 1 */
/* All tests passed */
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
