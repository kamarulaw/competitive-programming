/* SOLUTION 1 */ 
/* progress so far */ 
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

    bool onboundary(int m, int n, int x, int y)
    {
        if (x == m-1)
        {
            return true;
        }
         
        if (y == n-1)
        {
            return true;
        }
        return false; 
    }

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) 
    {
        int m = maze.size(); 
        int n = maze[0].size();

        vector<bool> v;
        vector<vector<bool>> visited;

        for (int j = 0; j < n; j++)
        {
            v.push_back(false);
        } 

        for (int i = 0; i < m; i++)
        {
            visited.push_back(v);
        }

        queue<vector<int>> q; 

        entrance.push_back(0);
        q.push(entrance);
        visited[entrance[0]][entrance[1]]= true; 
        
        vector<vector<int>> dirs; 
        vector<int> dir;

        dir.push_back(0); 
        dir.push_back(1); 
        dirs.push_back(dir); 
        dir.clear(); 

        dir.push_back(1); 
        dir.push_back(0); 
        dirs.push_back(dir); 
        dir.clear(); 

        dir.push_back(-1); 
        dir.push_back(0); 
        dirs.push_back(dir); 
        dir.clear(); 

        dir.push_back(0); 
        dir.push_back(-1); 
        dirs.push_back(dir); 
        dir.clear(); 

        while (q.size() > 0)
        {
            vector<int> front = q.front(); q.pop();
            for (auto d: dirs) 
            {
                int newX = front[0] + d[0]; 
                int newY = front[1] + d[1]; 

                if (inbounds(m, n, newX, newY) && visited[newX][newY] == false)
                {
                    vector<int> coord;
                    coord.push_back(newX);
                    coord.push_back(newY); 
                    coord.push_back(front[2] + 1);

                    if (onboundary(m, n, front[0], front[1]) && front[2] != 0)
                    {
                        return front[2];
                    }

                    if (maze[coord[0]][coord[1]] == '.')
                    {
                        q.push(coord);
                        visited[newX][newY] = true;
                    }
                }
            }
        }
        return -1;
    }
};
