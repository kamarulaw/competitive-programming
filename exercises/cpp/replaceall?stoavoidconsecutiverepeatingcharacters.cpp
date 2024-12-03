/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string modifyString(string s) 
    {
        if (s.length() == 1)
        {
            if (s[0] == '?')
            {
                return "a";
            }
            else 
            {
                return s;
            }
        }
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (i == 0)
                {
                    char replacement = 'a';
                    while ((int)s[1] == (int)replacement)
                    {
                        replacement = char((int)replacement + 1);
                    }
                    s[0] = replacement;
                }
                if (i == n-1)
                {
                    char replacement = 'a';
                    while ((int)s[n-2] == (int)replacement)
                    {
                        replacement = char((int)replacement + 1);
                    }
                    s[n-1] = replacement;
                }
                if (i > 0 && i < n-1)
                {
                    char replacement = 'a';
                    while (((int)s[i-1] == (int)replacement) || ((int)s[i+1] == (int)replacement))
                    {
                        replacement = char((int)replacement + 1);
                    }
                    s[i] = replacement;
                }
            }
        }
        return s;    
    }
};
