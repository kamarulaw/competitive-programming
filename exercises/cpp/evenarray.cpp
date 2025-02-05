/* SOLUTION 1 */
/* All tests passed */ 

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
        ull ow=0;
        ull ew=0;
        cin >> n;
        vector<int> arr(n,INT_MIN);
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (j%2==0&&arr[j]%2==1)
            {
                ew++;
            }
            if (j%2==1&&arr[j]%2==0)
            {
                ow++;
            }
        }
        if (ow==ew)
        {
            cout << ow;
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}
