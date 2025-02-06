/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <iostream>
using namespace std;

int main()
{
    int t;
    string s; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        int ac = 0; 
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j]=='A')
            {
                ac++;
            }
        }
        if (ac > s.length() - ac)
        {
            cout << "A";
        }
        else 
        {
            cout << "B";
        }
        if (i != t-1)
        {
            cout << endl;
        }
    }
    return 0;
}
