/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 2 */

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,a,b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int sol = 0;
        cin >> a >> b; vector<int> vec; vec.push_back(a); vec.push_back(b); sort(vec.begin(),vec.end());
        while (vec[0] < vec[1])
        {
            sol++; vec[0] += 10;
        }
        cout << sol << endl;
    }
    return 0;
}
