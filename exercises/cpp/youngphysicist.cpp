/* SOLUTION 1 */
/* All tests passed */ 

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    vector<int> row(3,0);
    vector<vector<int>> rectangle(n,row);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> rectangle[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int colsum = 0;
        for (int j = 0; j < n; j++)
        {
            colsum += rectangle[j][i];
        }
        if (colsum != 0)
        {
            cout << "NO"; 
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
