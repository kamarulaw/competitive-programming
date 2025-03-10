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
        map<char,int> m; 
        for (int r = 1; r <= 3; r++)
        {
            string row;
            cin >> row;
            for (int c = 0; c < row.length(); c++)
            {
                m[row[c]]++;
            }
        }
        for (auto it : m)
        {
            if (it.second==2&&it.first!='?')
            {
                cout << it.first << endl;
            }
        }
    }
    return 0;
}
