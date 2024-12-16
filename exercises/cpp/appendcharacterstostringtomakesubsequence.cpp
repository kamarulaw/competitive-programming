/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        if (t.length() == 0)
        {
            return 0;
        }
        int sol = 0;
        int ss = 0;
        int tt = 0;
        int slen = s.length();
        int tlen = t.length();
        while (ss < slen && tt < tlen)
        {
            if (s[ss] == t[tt])
            {
                ss++; tt++;
            }
            else
            {
                ss++;
            }
            if (tt == tlen)
            {
                return 0;
            }
        }
        return tlen - tt;    
    }
};
