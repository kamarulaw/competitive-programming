/* SOLUTION 1 */
/* In queue */

#include <map>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,a,b; cin >> n >> a >> b; cout << min((n/2)*b+(n%2)*a,a*n) << endl;
    }
}
