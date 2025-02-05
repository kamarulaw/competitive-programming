/* SOLUTION 1 */
/* All tests passed */ 

#include <cmath>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
    ull t;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        ull sol = 0;
        for (int i = 0; i < 10; i++)
        {
            if (i==0&&s[i]-'c'!=0)
            {
                sol++;
            }
            else if (i==1&&s[i]-'o'!=0)
            {
                sol++;
            }
            else if (i==2&&s[i]-'d'!=0)
            {
                sol++;
            }
            else if (i==3&&s[i]-'e'!=0)
            {
                sol++;
            }
            else if (i==4&&s[i]-'f'!=0)
            {
                sol++;
            }
            else if (i==5&&s[i]-'o'!=0)
            {
                sol++;
            }
            else if (i==6&&s[i]-'r'!=0)
            {
                sol++;
            }
            else if (i==7&&s[i]-'c'!=0)
            {
                sol++;
            }
            else if (i==8&&s[i]-'e'!=0)
            {
                sol++;
            }
            else if (i==9&&s[i]-'s'!=0)
            {
                sol++;
            }
        }
        cout << sol << endl;
    }
    return 0;
}
