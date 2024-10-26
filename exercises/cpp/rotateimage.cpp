/* SOLUTION 1*/ 
/* All tests passed */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        // row n-i -> col i
        int n = matrix.size();
        vector<int> row_(n, 0);
        vector<vector<int>> matrix_(n,row_);

        for (int i = 0; i < n; i++)
        {
            vector<int> col_i = matrix[n-i-1];
            for (int j = 0; j < n; j++)
            {
                matrix_[j][i] = col_i[j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = matrix_[i][j];
            }
        }
        return;
    }
};
