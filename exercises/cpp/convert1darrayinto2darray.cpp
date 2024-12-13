/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        int ind = 0; 
        if (m*n != original.size())
        {
            return {};
        }
        vector<int> v(n,0);
        vector<vector<int>> sol(m,v);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sol[i][j] = original[ind]; ind++;
            }
        }   
        return sol; 
    }
};
