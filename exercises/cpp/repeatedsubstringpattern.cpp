/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int ss = s.length();
        string pattern = "";
        for (int i = 0; i < ss; i++)
        {
            if (pattern.length() > 0 && ss % pattern.length() == 0)
            {
                int ind = 0;
                while (ind < ss)
                {
                    if (pattern[ind % pattern.length()] != s[ind])
                    {
                        break;
                    }
                    ind++;
                }
                if (ind == ss)
                {
                    return true;
                }
            }
            pattern += s[i];
        }    
        return false;
    }
};
