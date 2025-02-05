/* SOLUTION 1 */
/* All tests passed */ 

#include <vector>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr(3,INT_MIN);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        if (arr[0]==arr[1])
        {
            cout << arr[2];
        }
        if (arr[0]==arr[2])
        {
            cout << arr[1];
        }
        if (arr[1]==arr[2])
        {
            cout << arr[0];
        }
        cout << endl;
    }
    return 0;
}
