/* SOLUTION 1 */
/* MEMORY LIMIT EXCEEDED ON CASE 7 of 69 */
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) 
    {
        if (ops.size() == 0)
        {
            return m*n;
        }
        vector<int> rows(n,0);
        vector<vector<int>> matrix(m,rows);
        int maxinteger = INT_MIN;
        int maxintegercount = 0;
        for (int i = 0; i < ops.size(); i++)
        {
            vector<int> op = ops[i];
            for (int j = 0; j < op[0]; j++)
            {
                for (int k = 0; k < op[1]; k++)
                {
                    matrix[j][k]++;
                    if (maxinteger < matrix[j][k])
                    {
                        maxinteger = matrix[j][k];
                        maxintegercount = 1;
                    }
                    else if (maxinteger == matrix[j][k])
                    {
                        maxintegercount++;
                    }
                }
            }
        }
        return maxintegercount;    
    }
};
