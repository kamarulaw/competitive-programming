/* SOLUTION 1 */ 
/* PRE-TESTS 1 & 3 Passed */
class Solution {
public:
    bool inbounds(int m, int n, int x, int y)
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


    int orangesRotting(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();

        vector<bool> v;
        vector<vector<bool>> visited;
        for (int i = 0; i < n; i++)
        {
            v.push_back(false);
        }
        for (int j = 0; j < m; j++)
        {
            visited.push_back(v);
        }

        int onecount = 0;
        vector<int> start;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    onecount++;
                }

                if (grid[i][j] == 2 && start.size() == 0)
                {
                    start.push_back(i);
                    start.push_back(j);
                }
            }
        }


        if (onecount == 0)
        {
            return 0;
        }

        int timeelapsed = 0; 
        queue<vector<int>> q;
        start.push_back(timeelapsed);
        q.push(start); 
        visited[start[0]][start[1]] = true;

        vector<int> dir;
        vector<vector<int>> dirs;

        dir.push_back(0);
        dir.push_back(1); 
        dirs.push_back(dir);
        dir.clear();

        dir.push_back(1);
        dir.push_back(0); 
        dirs.push_back(dir);
        dir.clear();

        dir.push_back(0);
        dir.push_back(-1); 
        dirs.push_back(dir);
        dir.clear();

        dir.push_back(-1);
        dir.push_back(0); 
        dirs.push_back(dir);
        dir.clear();        



        while (q.size() > 0)
        {
            vector<int> front = q.front();
            q.pop();

            for (auto d: dirs)
            {
                int newx = front[0] + d[0]; 
                int newy = front[1] + d[1];

                if (inbounds(m,n,newx,newy) && visited[newx][newy] == false)
                {
                
                    if (grid[newx][newy] == 1)
                    {
                        onecount--;
                        grid[newx][newy] = 2;
                    }
                    vector<int> coord;
                    coord.push_back(newx);
                    coord.push_back(newy);
                    coord.push_back(front[2]+1);
                    
                    q.push(coord);
                    visited[coord[0]][coord[1]] = true; 
                }
            }

            if (onecount == 0)
            {
                return front[2]+1;
            }

        }

        if (onecount > 0)
        {
            return -1;
        }

        return m*n;
    }
};

/* SOLUTION 2 */ 
/* PRE-TESTS PASSED */
class Solution {
public:
    bool inbounds(int m, int n, int x, int y)
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

    int orangesRotting(vector<vector<int>>& grid) 
    {
        int m = grid.size();
        int n = grid[0].size();
                
        int onecount = 0;
        vector<int> start;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    onecount++;
                }

                if (grid[i][j] == 2 && start.size() == 0)
                {
                    start.push_back(i);
                    start.push_back(j);
                }
            }
        }
        
        if (onecount == 0)
        {
            return 0;
        }
        
        int timeelapsed = 0; 
        queue<vector<int>> q;
        start.push_back(timeelapsed);
        q.push(start); 
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,1},{0,-1}};     

        while (q.size() > 0)
        {
            vector<int> front = q.front();
            q.pop();
            for (auto d: dirs)
            {
                int newx = front[0] + d[0]; 
                int newy = front[1] + d[1];
                if (inbounds(m,n,newx,newy) && grid[newx][newy] == 1)
                {
                    grid[newx][newy] = 2;
                    onecount--;
                    if (onecount == 0)
                    {
                        return front[2]+1;
                    }
                    vector<int> coord;
                    coord.push_back(newx);
                    coord.push_back(newy);
                    coord.push_back(front[2]+1);
                    q.push(coord);
                }
            }
        }
        
        if (onecount > 0)
        {
            return -1;
        }
        return m*n;
    }
};
