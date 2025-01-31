/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        if (s.length()==3)
        {
            if (s[0]=='y'||s[0]=='Y')
            {
                if (s[1]=='e'||s[1]=='E')
                {
                    if (s[2]=='s'||s[2]=='S')
                    {
                        cout << "YES";
                    }
                    else
                    {
                        cout << "NO";
                    }
                }
                else 
                {
                    cout << "NO";
                }
            }
            else 
            {
                cout << "NO";
            }
        }
        else 
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
