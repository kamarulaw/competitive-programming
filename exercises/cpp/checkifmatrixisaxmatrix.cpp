/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j && grid[i][j] == 0)
                {
                    return false;
                }
                if (i != j && grid[i][j] != 0)
                {
                    return false;
                }
            }
        }
        return true;    
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<vector<int>> other_diagonal;
        vector<bool> false_vec(n,false);
        vector<vector<bool>> visited(n,false_vec);
        other_diagonal.push_back({n-1,0});
        while(other_diagonal[other_diagonal.size()-1][0] != 0)
        {
            int i = other_diagonal[other_diagonal.size()-1][0];
            int j = other_diagonal[other_diagonal.size()-1][1];
            i--;
            j++;
            other_diagonal.push_back({i,j});
        }
        for (int i = 0; i < other_diagonal.size(); i++)
        {
            if (grid[other_diagonal[i][0]][other_diagonal[i][1]] == 0)
            {
                return false;
            }
            if (grid[i][i] == 0)
            {
                return false;
            }
            visited[i][i] = true;
            visited[other_diagonal[i][0]][other_diagonal[i][1]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (visited[i][j] == false && grid[i][j] != 0)
                {
                    return false;
                }
                visited[i][j] = true;
            }
        }
        return true;
    }
};
