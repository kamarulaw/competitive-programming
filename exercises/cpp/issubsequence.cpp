/* SOLUTION 1 */
/* All tests passed */ 
class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if (s.length() == 0)
        {
            return true;
        }
        if (s.length() > t.length())
        {
            return false;
        }    
        int slen = s.length();
        int tlen = t.length();
        int ss = 0;
        int tt = 0;
        while (ss < slen && tt < tlen)
        {
            if (s[ss] == t[tt])
            {
                ss++;
                tt++;
            }
            else
            {
                tt++;
            }
            if (ss == slen)
            {
                return true;
            }
        }
        return false;
    }
};
