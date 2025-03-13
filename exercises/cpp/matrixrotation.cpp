/* SOLUTION 1 */
/* All tests passed */

#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

bool condsat(vector<vector<int>> mat)
{
    return mat[0][0]<mat[0][1]&&mat[1][0]<mat[1][1]&&mat[0][0]<mat[1][0]&&mat[0][1]<mat[1][1];
}

vector<vector<int>> rotate(vector<vector<int>> mat)
{
    int tl = mat[0][0];
    int bl = mat[1][0];
    int tr = mat[0][1];
    int br = mat[1][1];
    vector<int> row(2,INT_MAX); vector<vector<int>> sol(2,row);
    sol[0][1] = tl;
    sol[1][1] = tr;
    sol[1][0] = br;
    sol[0][0] = bl;
    return sol;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> row(2,INT_MAX);
        vector<vector<int>> mat(2,row);
        cin >> mat[0][0];
        cin >> mat[0][1];
        cin >> mat[1][0];
        cin >> mat[1][1];
        if (condsat(mat)||condsat(rotate(mat))||condsat(rotate(rotate(mat)))||condsat(rotate(rotate(rotate(mat)))))
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
