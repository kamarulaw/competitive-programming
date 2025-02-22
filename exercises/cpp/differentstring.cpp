/* SOLUTION 1 */
/* Al tests passed */
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
        map<char,int> m;
        int n = s.length();
        for (int j = 0; j < n; j++)
        {
            m[s[j]]++;
        }
        if (m.size() > 1)
        {
            cout << "YES" << endl;
            char c0 = s[0];
            int i1;
            char c1;
            for (int j = 1; j < n; j++)
            {
                if (s[j]!=c0)
                {
                    i1 = j;
                    c1 = s[j];
                    char tmp = c0;
                    s[0] = c1;
                    s[i1] = tmp;
                    cout << s << endl;
                    break;
                }
                
            }
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
}
