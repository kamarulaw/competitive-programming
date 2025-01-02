/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) 
    {
        int numemptycells = 9;
        vector<char> v(3,' ');
        vector<vector<char>> grid(3,v);
        for (int i = 0; i < moves.size(); i++)
        {
            int move_row = moves[i][0];
            int move_col = moves[i][1];
            if (i % 2 == 0)
            {
                grid[move_row][move_col] = 'X';
                numemptycells--;
            }
            else 
            {
                grid[move_row][move_col] = 'O';
                numemptycells--; 
            }
        }
        if (grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2]) 
        {
            if (grid[0][0] == 'X')
            {
                return "A";
            }
            else if (grid[0][0] == 'O')
            {
                return "B";
            }
        }  
        if (grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2]) 
        {
            if (grid[1][0] == 'X')
            {
                return "A";
            }
            else if (grid[1][0] == 'O')
            {
                return "B";
            }
        }
        if (grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2]) 
        {
            if (grid[2][0] == 'X')
            {
                return "A";
            }
            else if (grid[2][0] == 'O') 
            {
                return "B";
            }
        }
        if (grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0]) 
        {
            if (grid[0][0] == 'X')
            {
                return "A";
            }
            else if (grid[0][0] == 'O')
            {
                return "B";
            }
        }  
        if (grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1]) 
        {
            if (grid[0][1] == 'X')
            {
                return "A";
            }
            else if (grid[0][1] == 'O')
            {
                return "B";
            }
        }
        if (grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2]) 
        {
            if (grid[0][2] == 'X')
            {
                return "A";
            }
            else if (grid[0][2] == 'O')
            {
                return "B";
            }
        }    
        if ((grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) || (grid[2][0] == grid[1][1] && grid[1][1] == grid[0][2]))
        {
            if (grid[1][1] == 'X')
            {
                return "A";
            }
            else if (grid[1][1] == 'O')
            {
                return "B";
            }
        }
        if (numemptycells == 0)
        {
            return "Draw";
        }
        else 
        {
            return "Pending";
        }
        /*
        Case 97 of 101: 
        [X O X ]
        [O O X ]
        [X O _ ]
        */
    }
};



