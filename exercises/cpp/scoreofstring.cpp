/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int scoreOfString(string s) 
    {
        int sol = 0; 
        for (int i = 0; i < s.length()-1; i++)
        {
            sol += abs(s[i+1] - s[i]);
        }    
        return sol;
    }
};
