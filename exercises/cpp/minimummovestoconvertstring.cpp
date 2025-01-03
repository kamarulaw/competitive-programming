/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumMoves(string s) 
    {
        
        int sol = 0;
        int ind = 0;
        int n = s.length();
        while (ind < n)
        {
            if (s[ind] == 'O')
            {
                ind++;
                continue;
            }
            else 
            {
                ind += 3;
                sol++;
            }
        }
        return sol;
    }
};
