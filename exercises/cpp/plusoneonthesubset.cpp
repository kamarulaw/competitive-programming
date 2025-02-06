/* SOLUTION 1 */
/* All tests passed */ 

#include <cmath>
#include <vector>
#include <climits>
#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
    ull t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ull n;
        cin >> n; 
        int min_ = INT_MAX;
        int max_ = INT_MIN;
        vector<int> arr(n,INT_MIN);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            min_ = min(arr[i],min_);
            max_ = max(arr[i],max_);
        }
        cout << max_ - min_ << endl;
    }
}
