/* SOLUTION 1 */
/* All tests passed */

#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    int traincount = 0;
    int maxtraincount = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        traincount -= a;
        traincount += b;
        maxtraincount = max(traincount,maxtraincount); 
    }
    cout << maxtraincount;
    return 0;
}
