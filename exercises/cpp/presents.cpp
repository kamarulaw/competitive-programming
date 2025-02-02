/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> seq(n+1,INT_MIN);
    for (int i = 1; i <= n; i++)
    {
        cin >> seq[i];
    }
    vector<int> sol(n+1,INT_MIN);
    for (int i = 1; i <= n; i++)
    {
        int index = i;
        int other = seq[i];
        sol[other] = index;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << sol[i] << " ";
    }
    return 0;
}
