/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) 
    {
        /* continue walking outside of grid before reenterting v. what was done in spiralmatrix and spiralmatrixii */
        char dir = 'r';
        vector<vector<int>> sol;
        vector<bool> false_vec(cols,false);
        vector<vector<bool>> visited(rows,false_vec);
        int row = rStart;
        int col = cStart;
        int added = 0;
        while (added != rows*cols) 
        {
            if (0 <= row && row < rows && 0 <= col && col < cols && visited[row][col] == false)
            {
                added++;
                sol.push_back({row,col});
                visited[row][col] = true;
            }
            if (dir == 'r' && col < cols-1 && visited[row][col+1] == false)
            {
                col++;
            }
            else if (dir == 'r')
            {
                dir = 'd';
                row++;
            }
            else if (dir == 'd' && row < rows-1 && visited[row+1][col] == false)
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
