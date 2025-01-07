/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool ismagicsquare(int sr,int sc,vector<vector<int>> grid)
    {
        map<int,int> m;
        for (int i = sr; i < sr+3; i++)
        {
            for (int j = sc; j < sc+3; j++)
            {
                m[grid[i][j]]++;
            }
        }
        if (m.size() != 9)
        {
            return false;
        }
        if (m[1]!=1||m[2]!=1||m[3]!=1||m[4]!=1||m[5]!=1||m[6]!=1||m[7]!=1||m[8]!=1||m[9]!=1)
        {
            return false;
        }
        int diagsum1 = grid[sr][sc] + grid[sr+1][sc+1] + grid[sr+2][sc+2];
        int diagsum2 = grid[sr][sc+2] + grid[sr+1][sc+1] + grid[sr+2][sc];
        int rowsum1 = grid[sr][sc] + grid[sr][sc+1] + grid[sr][sc+2];
        int rowsum2 = grid[sr+1][sc] + grid[sr+1][sc+1] + grid[sr+1][sc+2];
        int rowsum3 = grid[sr+2][sc] + grid[sr+2][sc+1] + grid[sr+2][sc+2];
        int colsum1 = grid[sr][sc] + grid[sr+1][sc] + grid[sr+2][sc];
        int colsum2 = grid[sr][sc+1] + grid[sr+1][sc+1] + grid[sr+2][sc+1];
        int colsum3 = grid[sr][sc+2] + grid[sr+1][sc+2] + grid[sr+2][sc+2];
        if (diagsum1 == diagsum2 && diagsum2 == rowsum1 && rowsum1 == rowsum2 && rowsum2 == rowsum3 && rowsum3 == colsum1)
        {
            if (colsum1 == colsum2 && colsum2 == colsum3)
            {
                return true;
            }
        }
        return false;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) 
    {
        int sol = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i+2 < m && j+2 < n && ismagicsquare(i,j,grid))
                {
                    sol++;
                }
            }
        }
        return sol;
    }
};
