/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char> ss;
        stack<char> ts;
        for (int i = 0; i < min(s.length(),t.length()); i++)
        {
            if (s[i] != '#')
            {
                ss.push(s[i]);
            }
            else 
            {
                if (ss.size() > 0)
                {
                    ss.pop();
                }
            }
            if (t[i] != '#')
            {
                ts.push(t[i]);
            }
            else 
            {
                if (ts.size() > 0)
                {
                    ts.pop();
                }
            }
        }
        for (int i = min(s.length(),t.length()); i < max(s.length(),t.length()); i++)
        {
            if (max(s.length(),t.length()) == s.length())  
            {
                if (s[i] != '#')
                {
                    ss.push(s[i]);
                }
                else 
                {
                    if (ss.size() > 0)
                    {
                        ss.pop();
                    }
                }
            }
            else 
            {
                if (t[i] != '#')
                {
                    ts.push(t[i]);
                }
                else 
                {
                    if (ts.size() > 0)
                    {
                        ts.pop();
                    }
                }
            }
        }
        string sr = "";
        string tr = "";
        while (ss.size() > 0)
        {
            sr += ss.top(); ss.pop();
        }
        while (ts.size() > 0)
        {
            tr += ts.top(); ts.pop();
        }
        return sr.compare(tr) == 0;
    }
};
