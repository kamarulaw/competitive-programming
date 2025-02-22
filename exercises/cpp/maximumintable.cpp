/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> row(n,0);
    vector<vector<int>> matrix(n,row);
    for (int j = 0; j < n; j++)
    {
        matrix[0][j] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        matrix[j][0] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (matrix[j][k]==0)
            {
                matrix[j][k] = matrix[j-1][k] + matrix[j][k-1];
            }
            if (j==n-1&&k==n-1)
            {
                cout << matrix[j][k] << endl;
            }
        }
    }
}
