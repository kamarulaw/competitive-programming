/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sol = 0;
    int max_ = INT_MIN;
    vector<int> nums(n,INT_MIN);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        max_ = max(nums[i],max_);
    }
    for (int i = 0; i < n; i++)
    {
        sol += (max_-nums[i]);
    }
    cout << sol;
    return 0;
}
