/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool inbounds(int x, int y, int m, int n)
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

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        if (image[sr][sc] == color)
        {
            return image;
        }

        int m = image.size();
        int n = image[0].size();
        int original_color = image[sr][sc];    

        queue<vector<int>> q; 
        vector<int> start_coord;
        start_coord.push_back(sr);
        start_coord.push_back(sc);
        q.push(start_coord);
        image[sr][sc] = color;

        vector<vector<int>> dirs = {{-1,0},{1,0},{0,1},{0,-1}};

        while (q.size() > 0)
        {
            vector<int> front = q.front();
            q.pop();

            int row = front[0];
            int col = front[1];

            for (auto d : dirs)
            {
                int newrow = row+d[0]; 
                int newcol = col+d[1];
                if (inbounds(newrow,newcol,m,n) && image[newrow][newcol] == original_color)
                {
                    vector<int> queue_coord; 
                    queue_coord.push_back(newrow);
                    queue_coord.push_back(newcol);
                    q.push(queue_coord);
                    image[newrow][newcol] = color;
                }
            }
        }
        return image;
    }
};
