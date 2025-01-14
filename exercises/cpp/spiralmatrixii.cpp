/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        char dir = 'r'; int m = n;
        vector<int> empty_vec(n,0);
        vector<vector<int>> matrix(n,empty_vec);
        vector<bool> false_vec(n,false);
        vector<vector<bool>> visited(n,false_vec);
        int added = 0; int row = 0; int col = 0;
        while (added != n*n)
        {
            if (0 <= row && row < n && 0 <= col && col < n && visited[row][col] == false)
            {
                added++;
                matrix[row][col] = added;
                visited[row][col] = true;
            }
            if (dir == 'r' && col < n-1 && visited[row][col+1] == false)
            {
                col++;
            }
            else if (dir == 'r')
            {
                dir = 'd';
                row++;
            }
            else if (dir == 'd' && row < m-1 && visited[row+1][col] == false)
            {
                row++;
            }
            else if (dir == 'd')
            {
                dir = 'l';
                col--;
            }
            else if (dir == 'l' && col >=1 && visited[row][col-1] == false)
            {
                col--;
            }
            else if (dir == 'l')
            {
                dir = 'u';
                row--;
            }
            else if (dir == 'u' && row >= 1 && visited[row-1][col] == false)
            {
                row--;
            }
            else if (dir == 'u') 
            {
                dir = 'r';
                col++;
            }
        }
        return matrix;
    }
};
