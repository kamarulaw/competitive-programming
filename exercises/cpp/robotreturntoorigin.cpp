/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int ew = 0;
        int ns = 0; 
        for (int i = 0; i < moves.length(); i++)
        {
            if (moves[i] == 'L')
            {
                ew--;
            }
            else if (moves[i] == 'R')
            {
                ew++;
            }
            else if (moves[i] == 'U')
            {
                ns--;
            }
            else 
            {
                ns++;
            }
        }    
        return ew == ns && ns == 0; 
    }
};
