/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <cmath>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x,y; cin >> x >> y; cout << min(x,y) << " " << max(x,y) << endl; 
    }
}
