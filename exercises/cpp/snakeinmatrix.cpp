/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) 
    {
        int x = 0;
        int y = 0;
        for (int i = 0; i < commands.size(); i++)
        {
            if (commands[i].compare("DOWN") == 0)
            {
                x++;
            }
            else if (commands[i].compare("UP") == 0)
            {
                x--;
            }
            else if (commands[i].compare("LEFT") == 0)
            {
                y--;
            }
            else 
            {
                y++;
            }
        }
        return x*n + y;    
    }
};
