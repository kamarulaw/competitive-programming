/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<vector<int>> unsafelocs;
    vector<vector<vector<int>>> paths;
    vector<vector<int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};

    int mhd(int a, int b, int x, int y)
    {
        return abs(a-x) + abs(b-y);
    }

    bool inbounds(int x, int y, int m, int n)
    {
        if (x < 0 || x >= m || y < 0 || y >= n)
        {
            return false;
        }
        return true;
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) 
    {
        int m = grid.size(); 
        int n = grid[0].size();
        vector<bool> false_vec(n,false); vector<vector<bool>> visited(m,false_vec); visited[0][0] = true;
        stack<vector<int>> istack_; stack_.push({0,0});stack<vector<bool>> bstack_; stack_.push(visited);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    unsafelocs.push_back({i,j});
                }
            }
        }
    }
};
