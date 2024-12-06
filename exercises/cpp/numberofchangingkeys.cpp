/* SOLUTION 1 */
/* All tests passed  */
class Solution {
public:
    int countKeyChanges(string s) 
    {
        int sol = 0;
        for (int i = 0; i < s.length()-1; i++)
        {
            if (tolower(s[i]) != tolower(s[i+1]))
            {
                sol++;
            }
        }   
        return sol; 
    }
};
