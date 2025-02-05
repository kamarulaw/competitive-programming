/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <string>
#include <climits>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
    ull t;
    cin >> t;
    map<char,int> legend; 
    legend['T']=1;legend['i']=1;legend['m']=1;legend['u']=1;legend['r']=1;
    for (int i = 0; i < t; i++)
    {
        ull n; 
        string s; 
        cin >> n >> s;
        map<char,int> curr;
        for (int j = 0; j < n; j++)
        {
            curr[s[j]]++;
        }
        bool ae = true; 
        for (auto it : curr)
        {
            if (curr[it.first]!=legend[it.first])
            {
                ae=false; break;
            }
        }
		for (auto it : legend)
		{
			if (curr[it.first]!=legend[it.first])
			{
				ae=false; break;
			}
		}
        if (ae==true)
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
