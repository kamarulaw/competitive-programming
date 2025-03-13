/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n,INT_MAX);
        vector<bool> visited(n,false);
        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            arr[j] = num;
            
        }
        int score=0;
        sort(arr.begin(),arr.end());
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]==arr[j+1]&&visited[j]==false&&visited[j+1]==false)
            {
                score++;
                visited[j]=true;
                visited[j+1]=true;
            }
        }
        cout << score << endl;
    }
    return 0;
}
