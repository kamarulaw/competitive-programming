/* SOLUTION 1 */
/* All tests passed */ 

#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int n = s.length();
        int ac = 0;
        int bc = 0;
        int cc = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j]=='A')
            {
                ac++;
            }
            if (s[j]=='B')
            {
                bc++;
            }
            if (s[j]=='C')
            {
                cc++;
            }
        }
        if (bc==ac+cc)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}
