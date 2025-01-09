/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) 
    {
        vector<vector<int>> mat_orig = mat;
        int m = mat.size();
        int n = mat[0].size();
        int shifts = n % k;
        for (int i = 0; i < m; i++)
        {
            int shifts = k;
            int shift_ = 0;
            if (i % 2 == 0)
            {
                while (shift_ < shifts)
                {
                    int first = mat[i][0];
                    vector<int> new_row(mat[i].begin()+1, mat[i].end());
                    new_row.push_back(first);
                    mat[i] = new_row;
                    shift_++;
                }
            }
            else
            {
                while (shift_ < shifts)
                {
                    int first = mat[i][n-1];
                    vector<int> new_row = mat[i];
                    new_row.insert(new_row.begin(), first);
                    new_row.pop_back();
                    mat[i] = new_row;
                    shift_++;
                }
            }
        }
        return mat_orig == mat;    
    }
};
