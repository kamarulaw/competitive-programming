/* SOLUTION 1 */
/* All tests passed */

#include <map>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,size;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> size;
        vector<int> arr(size,INT_MIN);
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
        }
        map<int,vector<int>> m;
        for (int j = 0; j < size; j++)
        {
           m[arr[j]].push_back(j); 
        }
        for (auto it : m)
        {
            if (it.second.size() == 1 )
            {
                cout << it.second[0] + 1 << endl;
            }
        }
    }
    return 0;
}
