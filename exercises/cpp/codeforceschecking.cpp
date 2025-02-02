/* SOLUTION 1 */
/* All tests passed */ 

#include <map>
#include <string>
#include <climits>
#include <iostream>

using namespace std;

int main() 
{
    int n;
    char c;
    cin >> n;
    map<char,int> m;
    m['c'] = 1;
    m['o'] = 1;
    m['d'] = 1;
    m['e'] = 1;
    m['f'] = 1;
    m['r'] = 1;
    m['s'] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (m[c] == 1)
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
