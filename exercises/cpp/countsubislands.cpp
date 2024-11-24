/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<vector<vector<int>>> grid1islands;
    vector<vector<vector<int>>> grid2islands;
    vector<vector<int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

    bool inbounds(int m, int n, int x, int y)
    {
        if (x < 0 || x >= m || y < 0 || y >= n) 
        {
            return false;
        }
        return true;
    }

    void findislands(vector<vector<int>> grid, vector<vector<bool>> visited, int gridnum)
    {
        int m = grid.size();
        int n = grid[0].size();
        int startrow = INT_MAX;
        int startcol = INT_MAX;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && visited[i][j] == false)
                {
                    startrow = i;
                    startcol = j;
                    queue<int> qrows; qrows.push(startrow);
                    queue<int> qcols; qrows.push(startcol);
                    visited[startrow][startcol] = true;
                    vector<vector<int>> island;
                    while (qrows.size() > 0)
                    {
                        int row = qrows.front(); qrows.pop();
                        int col = qcols.front(); qcols.pop();
                        for (int i = 0; i < dirs.size(); i++)
                        {
                            int newrow = row + dirs[i][0];
                            int newcol = col + dirs[i][1];
                            if (inbounds(grid.size(), grid[0].size(), newrow, newcol) && visited[newrow][newcol] == false && grid[newrow][newcol] == 1)
                            {
                                visited[newrow][newcol] = false;
                                island.push_back({newrow, newcol});
                            }
                        }
                    }
                    if (gridnum == 1)
                    {
                        grid1islands.push_back(island);
                    }
                    else 
                    {
                        grid2islands.push_back(island);
                    }
                }
            }
        }
        

    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        int sol = 0;
        vector<bool> boolvec(grid1[0].size(), false);
        vector<vector<bool>> visited(grid1.size(), boolvec);
        findislands(grid1, visited, 1);
        findislands(grid2, visited, 2);
        for (int i = 0; i < grid2islands.size(); i++)
        {
            int numfound = 0; vector<vector<int>> g2island = grid2islands[i]; 
            for (int j = 0; j < grid1islands.size(); j++)
            {
                vector<vector<int>> g1island = grid1islands[j];
                for (int ii = 0; ii < g2island.size(); ii++)
                {
                    for (int jj = 0; jj < g1island.size(); jj++)
                    {
                        if (g1island[jj] == g2island[ii])
                        {
                            numfound++;
                        }
                    }
                    if (numfound == g2island.size())
                    {
                        sol++;
                        break; 
                    }
                }
                if (numfound == g2island.size() )
                {
                    break;
                }
            }
        }
        return sol;
    }  
};
