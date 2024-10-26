/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<vector<int>> rotatematrix(vector<vector<int>> matrix) 
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
        return matrix_;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) 
    {
        int n = mat.size();
        vector<vector<int>> matrix_ = rotatematrix(mat);
        for (int i = 0; i <= 3; i++)
        {
            bool equal = true;
            for (int j = 0; j < n; j++)
            {
                if (matrix_[j] != target[j])
                {
                    equal = false;
                    break;
                }
            }
            if (equal == true)
            {
                return true;
            }
            matrix_ = rotatematrix(matrix_);
        }
        return false;
    }
};
