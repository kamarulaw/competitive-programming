/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countAsterisks(string s) 
    {
        int sol = 0;
        int barsfound = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (barsfound % 2 == 0 && s[i] == '*')
            {
                sol++;
            }
            if (s[i] == '|')
            {
                barsfound++;
            }
        }  
        return sol;  
    }
};
