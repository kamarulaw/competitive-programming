/* SOLUTION 1 */
/* psf */
/* leetcode (not codeforces) is down? */
class Solution {
public:
    int vowelConsonantScore(string s) 
    {
        int v = 0;
        int c = 0;
        int score = 0;
        map<char,int> m;
        m['a'] = 1;
        m['e'] = 1;
        m['i'] = 1;
        m['o'] = 1;
        m['u'] = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]]==1)
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        return v/c;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    int vowelConsonantScore(string s) 
    {
        int v = 0;
        int c = 0;
        int score = 0;
        map<char,int> m;
        m['a'] = 1;
        m['e'] = 1;
        m['i'] = 1;
        m['o'] = 1;
        m['u'] = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]]==1)
            {
                v++;
            }
            else if ((int)'a' <= (int)s[i] && (int)s[i] <= (int)'z')
            {
                c++;
            }
        }
        if (c==0)
        {
            return 0;
        }
        else
        {
            return v/c;
        }
    }
};
