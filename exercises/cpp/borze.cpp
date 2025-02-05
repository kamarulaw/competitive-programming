/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int ind = 0;
    string sol = "";
    while (ind <= n-2)
    {
        if (s[ind] == '.')
        {
            sol+='0';
            ind++;
        }
        if (s[ind]=='-'&&s[ind+1]=='-')
        {
            sol+='2';
            ind+=2;
        }
        if (s[ind]=='-'&&s[ind+1]=='.')
        {
            sol+='1';
            ind+=2;
        }
    }
    if (ind!=n)
    {
        sol+='0';
    }
    
    cout << sol; return 0;
}
