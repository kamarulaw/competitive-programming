/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 403 of 691 */
class Solution {
public:
    bool inbounds(int m, int n, int x, int y) 
    {
        if (x < 0 || x >= m || y < 0 || y >= n) 
        {
            return false;
        }
        return true;
    }

    bool findSafeWalk(vector<vector<int>>& grid, int health) 
    {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<vector<int>,vector<vector<bool>>>> pq;
        vector<bool> v(n,false);
        vector<vector<bool>> visited(m,v);
        visited[0][0] = true;
        vector<int> start = {0,0,health};
        pair<vector<int>,vector<vector<bool>>> start_;
        start_.first = start;
        start_.second = visited;
        pq.push(start_);
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,1},{0,-1}};
        while (pq.size() > 0)
        {
            vector<int> front = pq.front().first;
            vector<vector<bool>> vis = pq.front().second;
            pq.pop();
            int x = front[0];
            int y = front[1];
            int health = front[2];
            for (int k = 0; k < dirs.size(); k++)
            {
                int newx = dirs[k][0] + x; 
                int newy = dirs[k][1] + y;
                if (inbounds(m,n,newx,newy) && vis[newx][newy] == false)
                {
                    vis[newx][newy] = true;
                    int newhealth = health;
                    if (grid[newx][newy] == 1)
                    {
                        newhealth -= 1;
                    }
                    cout << newx << " " << newy << " | " << newhealth << endl;
                    if (newx == m-1 && newy == n-1 && newhealth >= 1)
                    {
                        return true;
                    }
                    pair<vector<int>,vector<vector<bool>>> pqelem;
                    pqelem.first = {newx,newy,newhealth};
                    pqelem.second = vis;
                    pq.push(pqelem);   
                }
            }
        }
        return false;
    }
};
