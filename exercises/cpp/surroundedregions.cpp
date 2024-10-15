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

    bool onboundary(int m,int n,int x,int y)
    {
        if (x == 0 || x == m-1)
        {
            return true;
        }

        if (y == 0 || y == n-1)
        {
            return true;
        }

        return false;
    }

    void solve(vector<vector<char>>& board) 
    {
        int m = board.size();
        int n = board[0].size();
        queue<vector<int>> queue;
        vector<bool> v(n,false);
        vector<vector<bool>> visited(m,v);
        vector<vector<int>> dirs = {{-1,0},{1,0},{0,1},{0,-1}};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (visited[i][j] == false && board[i][j] == 'O')
                {
                    vector<int> ij = {i,j};
                    queue.push(ij);
                    visited[i][j] = true;
                    vector<vector<int>> islandelems;
                    islandelems.push_back(ij); 
                    while (queue.size() > 0)
                    {
                        vector<int> front = queue.front();
                        queue.pop();
                        for (int k = 0; k < dirs.size(); k++)
                        {
                            int newi = front[0] + dirs[k][0];
                            int newj = front[1] + dirs[k][1];
                            if (inbounds(m,n,newi,newj) && visited[newi][newj] == false && board[newi][newj] == 'O')
                            {
                                visited[newi][newj] = true;
                                vector<int> newij = {newi,newj};
                                queue.push(newij);
                                islandelems.push_back(newij);
                            }
                        }
                    }
                    bool foundboundaryelem = false;
                    for (int k = 0; k < islandelems.size(); k++)
                    {
                        if (onboundary(m,n,islandelems[k][0],islandelems[k][1]))
                        {
                            foundboundaryelem = true;
                        }
                    }
                    if (foundboundaryelem == false)
                    {
                        for (int k = 0; k < islandelems.size(); k++)
                        {
                            board[islandelems[k][0]][islandelems[k][1]] = 'X';
                        }
                    }
                }
            }
        }
    }
};

// first try, im that dude
