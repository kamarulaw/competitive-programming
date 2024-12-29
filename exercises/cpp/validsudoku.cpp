/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> blockstarts = {{0,0},{0,3},{0,6},{3,0},{3,3},{3,6},{6,0},{6,3},{6,6}};
        for (int i = 0; i < m; i++)
        {
            map<char,int> m_;
            for (int j = 0; j < n; j++)
            {
                m_[board[i][j]]++;
            }
            for (auto it : m_)
            {
                if (it.first != '.' && it.second > 1)
                {
                    return false;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            map<char,int> m_;
            for (int j = 0; j < m; j++)
            {
                m_[board[j][i]]++;
            }
            for (auto it : m_)
            {
                if (it.first != '.' && it.second > 1)
                {
                    return false;
                }
            }
        }
        for (int i = 0; i < blockstarts.size(); i++)
        {
            int rowstart = blockstarts[i][0];
            int colstart = blockstarts[i][1];
            map<char,int> m_;
            for (int j = rowstart; j <= rowstart+2; j++)
            {
                for (int k = colstart; k <= colstart+2; k++)
                {
                    m_[board[j][k]]++;
                }
            }
            for (auto it : m_)
            {
                if (it.first != '.' && it.second > 1)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
