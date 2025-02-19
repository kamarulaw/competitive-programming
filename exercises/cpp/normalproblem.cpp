/* SOLUTION 1 */
/* All tests passed */ 
#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;
        string sol = "";
        reverse(a.begin(),a.end());
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j]=='p')
            {
                sol+='q';
            }
            else if (a[j]=='q')
            {
                sol+='p';
            }
            else
            {
                sol+='w';
            }
        }
        cout << sol << endl;
    }
}
