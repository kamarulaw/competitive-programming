/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <climits>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
    ull t;
    cin >> t;
    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        int n = s.length();
        if (n%2==0&&s.substr(0,n/2).compare(s.substr(n/2,n/2))==0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}
