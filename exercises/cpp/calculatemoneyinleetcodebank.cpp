/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int totalMoney(int n) 
    {
        int ind = 0;
        int sol = 0;
        int incby = 1;
        while (ind < n)
        {

            if (ind % 7 == 0 && ind != 0)
            {
                incby = ind/7 + 1; sol += incby; ind++; incby++;
            }
            else
            {
                sol += incby; ind++; incby++;
            }

        }   
        return sol; 
    }
};
