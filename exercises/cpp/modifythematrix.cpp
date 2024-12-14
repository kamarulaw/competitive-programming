/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> sol = matrix;
        for (int i = 0; i < n; i++)
        {
            int max_ = INT_MIN;
            for (int j = 0; j < m; j++)
            {
                max_ = max(max_, sol[j][i]);
            }
            for (int j = 0; j < m; j++)
            {
                if (sol[j][i] == -1)
                {
                    sol[j][i] = max_;
                }
            }
        }
        return sol;
    }
};
