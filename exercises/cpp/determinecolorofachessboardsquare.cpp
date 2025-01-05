/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool squareIsWhite(string coordinates) 
    {
        char letter = coordinates[0];
        int number_ = coordinates[1] - '0';
        if ((letter - 'a' + number_ - 1) % 2 == 0)    
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
