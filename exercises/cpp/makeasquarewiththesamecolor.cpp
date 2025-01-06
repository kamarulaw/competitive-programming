/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) 
    {
        vector<int> tl_w;
        vector<int> bl_w;
        vector<int> tr_w;
        vector<int> br_w;
        vector<int> tl_b;
        vector<int> bl_b;
        vector<int> tr_b;
        vector<int> br_b;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (grid[i][j] == 'W')
                {
                    tl_w.push_back(1);
                }
                else 
                {
                    tl_b.push_back(1);
                }
                if (grid[i+1][j] == 'W')
                {
                    bl_w.push_back(1);
                }
                else 
                {
                    bl_b.push_back(1);
                }
                if (grid[i][j+1] == 'W')
                {
                    tr_w.push_back(1);
                }
                else 
                {
                    tr_b.push_back(1);
                }
                if (grid[i+1][j+1] == 'W')
                {
                    br_w.push_back(1);
                }
                else
                {
                    br_b.push_back(1);
                }
            }
        }
        if (tl_w.size() >= 3 || tl_b.size() >= 3 || bl_w.size() >= 3 || bl_b.size() >= 3 || tr_w.size() >= 3 || tr_b.size() >= 3 || br_w.size() >= 3 || br_b.size() >= 3)
        {
            return true;
        }
        return false;
    }
};
