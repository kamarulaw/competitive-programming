/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool inbounds(int x, int y, int m, int n)
    {
        if (x < 0 || x >= m || y < 0 || y >= n) {
            return false;
        }
        return true; 
    }

    bool onboundary(int x, int y, int m, int n)
    {
        if (x==0 || x==m-1|| y==0|| y==n-1){
            return true; 
        }
        return false; 
    }

    int numEnclaves(vector<vector<int>>& grid) 
    {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<bool> v(n,false);
        vector<vector<bool>> visited(m,v);
        queue<vector<int>> q;
        vector<vector<int>> islandelems;
        vector<vector<int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        for (int i = 0; i < m ; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && visited[i][j] == false)
                {
                    vector<vector<int>> islandelems;
                    islandelems.push_back({i,j});
                    q.push({i,j});
                    visited[i][j] = true;
                    while (q.size() > 0)
                    {
                        vector<int> rc = q.front(); q.pop(); 
                        int row = rc[0];
                        int col = rc[1];
                        for (int k = 0; k < dirs.size(); k++)
                        {
                            int newrow = row + dirs[k][0];
                            int newcol = col + dirs[k][1];
                            if (inbounds(newrow,newcol,m,n) && visited[newrow][newcol]==false && grid[newrow][newcol]==1) 
                            {
                                q.push({newrow,newcol});
                                islandelems.push_back({newrow,newcol});
                                visited[newrow][newcol] = true;
                            }
                        }
                    }
                    bool hasboundaryelement = false;
                    for (int k = 0; k < islandelems.size(); k++)
                    {
                        if (onboundary(islandelems[k][0],islandelems[k][1],m,n))
                        {
                            hasboundaryelement = true;
                            break;
                        }
                    }
                    if (hasboundaryelement == false)
                    {
                        ans += islandelems.size();
                    }
                    islandelems.clear();
                }
            }
        }
        return ans;     
    }
};
