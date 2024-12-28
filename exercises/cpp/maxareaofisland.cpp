/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool inbounds(int m,int n,int x,int y)
    {
        if (x < 0 || x >= m)
        {
            return false;
        }

        if (y < 0 || y >= n)
        {
            return false;
        }

        return true;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int maxarea = 0;

        int m = grid.size();
        int n = grid[0].size();

        queue<vector<int>> queue;
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,-1},{0,1}};

        vector<bool> v(n,false);
        vector<vector<bool>> visited(m,v);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (visited[i][j] == false && grid[i][j] == 1)
                {
                    int islandsize = 1;
                    visited[i][j] = true;

                    vector<int> ijsize;
                    ijsize.push_back(i); 
                    ijsize.push_back(j);
                    ijsize.push_back(1);

                    queue.push(ijsize);

                    while (queue.size() > 0)
                    {
                        vector<int> front = queue.front();
                        
                        queue.pop();
                      
                        for (int k = 0; k < dirs.size(); k++)
                        {
                            int newi = front[0] + dirs[k][0];
                            int newj = front[1] + dirs[k][1];
                            if (inbounds(m,n,newi,newj) && visited[newi][newj] == false && grid[newi][newj] == 1)
                            {
                                visited[newi][newj] = true;
                                vector<int> newijsize;
                                newijsize.push_back(newi);
                                newijsize.push_back(newj);
                                newijsize.push_back(islandsize+1);
                                islandsize++;
                                queue.push(newijsize);
                            } 
                        }
                    }
                    maxarea = max(maxarea,islandsize); // third element of ijsize -> islandsize || ignore third element of ijsize
                }
            }
        }
        return maxarea;    
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    bool inbounds(int x,int y,int m,int n)
    {
        if (x < 0 || x >= m || y < 0 || y >= n)
        {
            return false;
        }
        return true;
    } 

    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
        int maxislandsize = 0;
        queue<int> row_queue;
        queue<int> col_queue;
        vector<bool> false_vec(n,false);
        vector<vector<bool>> visited(m,false_vec);
        vector<vector<int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && visited[i][j] == false)
                {
                    int islandsize = 0;
                    visited[i][j] = true;
                    row_queue.push(i);
                    col_queue.push(j);
                    while (row_queue.size() > 0)
                    {
                        int row = row_queue.front();
                        int col = col_queue.front();
                        row_queue.pop();
                        col_queue.pop();
                        islandsize++;
                        for (int k = 0; k < dirs.size(); k++)
                        {
                            int nr = row + dirs[k][0];
                            int nc = col + dirs[k][1];
                            if (inbounds(nr,nc,m,n) && grid[nr][nc] == 1 && visited[nr][nc] == false)
                            {
                                visited[nr][nc] = true;
                                row_queue.push(nr);
                                col_queue.push(nc); 
                            }
                        }
                    }
                    maxislandsize = max(maxislandsize,islandsize);
                }
            }
        }    
        return maxislandsize;
    }
};

