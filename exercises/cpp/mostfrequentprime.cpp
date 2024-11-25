/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool isprime(int n)
    {
        if (n == 2)
        {
            return true
        }
        if (n < 2 || n % 2 == 0)
        {
            return false;
        }
        for (int i = 2; i <= (int)pow(n,.5)+1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool inbounds(int m, int n, int x, int y)
    {
        if (x < 0 || x >= m || y < 0 || y >= n)
        {
            return false;
        }
        return true;
    }
    int mostFrequentPrime(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();
        map<int,int> map_;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int cell = mat[i][j];
                // N
                int startrow = i;
                int startcol = j;
                vector<int> north;
                while (inbounds(m,n,startrow-1,startcol))
                {
                    north.push_back(mat[startrow-1][startcol]);
                    startrow -= 1;
                }
                for (int k = 0; k < north.size(); k++)
                {
                    string result = to_string(cell);
                    for (int kk = 0; kk <= k; kk++)
                    {
                        result += to_string(north[kk]);
                    }
                    if (isprime(stoi(result)))
                    {
                        map_[stoi(result)]++;
                    }
                }
                // E
                startrow = i;
                startcol = j;
                vector<int> east;
                while (inbounds(m,n,startrow,startcol+1))
                {
                    east.push_back(mat[startrow][startcol+1]);
                    startcol += 1;
                }
                // S
                startrow = i;
                startcol = j;
                vector<int> south;
                while (inbounds(m,n,startrow+1,startcol))
                {
                    south.push_back(mat[startrow+1][startcol]);
                    startrow += 1;
                }
                // W
                startrow = i;
                startcol = j;
                vector<int> west;
                while (inbounds(m,n,startrow,startcol-1))
                {
                    west.push_back(mat[startrow][startcol-1]);
                    startcol -= 1;
                }
                // NE 
                startrow = i;
                startcol = j;
                vector<int> northeast;
                while (inbounds(m,n,startrow-1,startcol+1))
                {
                    northeast.push_back(mat[startrow-1][startcol+1]);
                    startrow -= 1;
                    startcol += 1;
                }
                // NW
                startrow = i;
                startcol = j;
                vector<int> northwest;
                while (inbounds(m,n,startrow-1,startcol-1))
                {
                    northwest.push_back(mat[startrow-1][startcol-1]);
                    startrow -= 1;
                    startcol -= 1;
                }
                // SE 
                startrow = i;
                startcol = j;
                vector<int> southeast;
                while (inbounds(mn,n,startrow+1,startcol+1))
                {
                    southeast.push_back(mat[startrow+1][startcol+1]);
                    startrow += 1;
                    startcol += 1;
                }
                // SW
                startrow = i;
                startcol = j;
                vector<int> southwest;
                while (inbounds(m,n,startrow+1,startcol-1))
                {
                    soutwest.push_back(mat[startrow+1][startcol-1]);
                    startrow += 1;
                    startcol -= 1;
                }
            }
        }
    }
};
