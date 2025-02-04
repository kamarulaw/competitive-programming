/* SOLUTION 1 */
/* All tests passed */

#include <string>
#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sol = 0;
    vector<int> h(n,INT_MIN);
    vector<int> a(n,INT_MIN);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i!=j)
            {
                if (h[i]==a[j])
                {
                    sol++;
                }
            }
        }
    }
    cout << sol;
    return 0;
}
