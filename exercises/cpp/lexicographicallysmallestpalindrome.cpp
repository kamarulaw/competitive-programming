/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string makeSmallestPalindrome(string s) 
    {
        int n = s.length();
        for (int i = 0; i < n/2; i++)
        {
            if (s[i] != s[n-i-1])
            {
                if ((int)s[i] <= (int)s[n-1-i])
                {
                    s[n-1-i] = s[i];
                }
                else 
                {
                    s[i] = s[n-1-i];
                }
            }
        }
        return s;    
    }
};
