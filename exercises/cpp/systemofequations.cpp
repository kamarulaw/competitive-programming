/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int sol = 0;
    cin >> n >> m;
    for (int a = 0; a <= max((int)pow(n,.5)+1,(int)pow(m,.5)+1); a++)
    {
        for (int b = 0; b <= max((int)pow(n,.5)+1,(int)pow(m,.5)+1); b++)
        {
            if ((int)pow(a,2)+b==n && (int)pow(b,2)+a==m)
            {
                sol++;
            }
        }
    }
    cout << sol << endl;
    return 0;
}
