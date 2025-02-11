/* SOLUTION 1 */
/* psf */

#include <vector>
#include <cmath>
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
        int row = INT_MAX;
        int col = INT_MAX;
        vector<string> grid(8);
        vector<int> relevant; 
        for (int r = 0; r < 8; r++)
        {
            cin >> grid[r];
            for (int c = 0; c < 8; c++)
            {
                if (col!=INT_MAX&&grid[r][c]!='.')
                {
                    row = r;
                    col = c;
                    relevant.push_back(row);
                    break;
                }
            }
            while (row+1 < 8 && grid[row+1][col]!='.')
            {
                row++;
                relevant.push_back(row);
            }
            string word = "";
            for (int j = relevant[0]; j <= relevant[relevant.size()-1]; j++)
            {
                word += grid[j][col];
            }
            cout << word.length() << endl;
        }
    }
}
