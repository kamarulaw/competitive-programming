/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> transpose;
        for (int i = 0; i < n; i++)    
        {
            vector<int> trow;
            for (int j = 0; j < m; j++)
            {
                trow.push_back(matrix[j][i]);
            }
            transpose.push_back(trow);
        }
        return transpose;
    }
};
