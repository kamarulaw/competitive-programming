/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        queue<int> row;
        queue<int> col;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row.push(i);
                    col.push(j);
                }
            }
        }
        while (row.size() > 0)
        {
            int r = row.front();
            int c = col.front();
            row.pop();
            col.pop();
            for (int j = 0; j < m; j++)
            {
                matrix[j][c] = 0;
            }
            for (int j = 0; j < n; j++)
            {
                matrix[r][j] = 0;
            }
        }
        return;
    }
};
