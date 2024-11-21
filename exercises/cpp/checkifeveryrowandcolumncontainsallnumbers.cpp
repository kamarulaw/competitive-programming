/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            map<int,int> m;
            map<int,int> p;
            for (int j = 0; j < n; j++)
            {
                m[matrix[i][j]]++;
            }
            for (int k = 0; k < n; k++)
            {
                p[matrix[k][i]]++;
            }
            if (m.size() != n)
            {
                return false;
            }
            if (p.size() != n)
            {
                return false;
            }
        }  
        return true;  
    }
};
