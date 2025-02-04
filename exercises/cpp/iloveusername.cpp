/* SOLUTION 1 */
/* All tests passed */

#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int n,n_;
    cin >> n;
    int sol = 0;
    int max_ = INT_MIN;
    int min_ = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> n_;
        if (n_ > max_ || min_ > n_)
        {
            sol++;
        }
        max_ = max(n_,max_);
        min_ = min(n_,min_);
    }
    cout << sol-1;
    return 0;
}
