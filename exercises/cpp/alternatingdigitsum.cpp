/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int alternateDigitSum(int n) 
    {
        int sol = 0;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            int digit = s[i] - '0';
            if (i % 2 == 0)
            {
                sol += digit;
            }
            else 
            {
                sol -= digit;
            }
        }    
        return sol;
    }
};
