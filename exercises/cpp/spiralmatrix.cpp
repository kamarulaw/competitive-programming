/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = 0;
        char dir = 'r';
        vector<int> sol;
        vector<bool> false_vec(n,false);
        vector<vector<bool>> visited(m,false_vec);  
        while (sol.size() != m*n)
        {
            if (0 <= row && row < m && 0 <= col && col < n && visited[row][col] == false)
            {
                sol.push_back(matrix[row][col]); 
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
            else if (dir == 'l' && col >= 1 && visited[row][col-1] == false)
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
        return sol;
    }
};
