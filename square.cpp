/* SOLUTION 1 */
/* All tests passed */ 

#include <cmath>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x,y;
        int x1 = INT_MAX;
        int x2 = INT_MIN;
        for (int j = 0; j < 4; j++)
        {
            cin >> x >> y;
            x1 = min(x,x1);
            x2 = max(x,x2);
        }
        cout << (int)pow(x2-x1,2) << endl;
    }
    return 0;
}
