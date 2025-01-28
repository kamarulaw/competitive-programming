/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<vector<int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};

    bool inbounds(int x, int y, int m, int n)
    {
        if (x < 0 || x >= m || y < 0 || y >= n)
        {
            return false;
        }    
        return true;
    }

    bool search(int ind, int i, int j, string word, vector<vector<char>> board, vector<vector<bool>> visited)
    {
        int m = board.size();
        int n = board[0].size();
        if (ind == word.length())
        {
            return true;
        }
        for (int k = 0; k < dirs.size(); k++)
        {
            int newx = i + dirs[k][0];
            int newy = j + dirs[k][1];
            if (ind < word.length()-1 && inbounds(newx,newy,m,n) && visited[newx][newy] == false && board[newx][newy] == word[ind+1]) 
            {
                visited[i][j] = true;
                cout << newx << " " << newy << endl;
                search(ind+1,newx,newy,word,board,visited);
                visited[i][j] = false;
            }
            if (ind == word.length()-1 && inbounds(newx,newy,m,n) && visited[newx][newy] == false && board[newx][newy] == word[])
            {
                visited[i][j] = true;
                search(ind
            }
        }
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) 
    {
        int m = board.size();
        int n = board[0].size();
        vector<bool> false_vec(n,false);
        vector<vector<bool>> visited(m,false_vec);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == word[0])
                {
                    visited[i][j] = true;
                    if (search(0,i,j,word,board,visited))
                    {
                        return true;
                    }
                    visited[i][j] = false;
                }
            }
        }
        return false;
    }
};
