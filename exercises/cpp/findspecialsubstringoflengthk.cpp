/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    bool hasSpecialSubstring(string s, int k) 
    {
        map<char,int> m;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        if (s.length() > k && m.size()==1)
        {
            return false;
        }
        int n = s.length();
        for (int i = 0; i <= n-k; i++)
        {
            char c;
            map<char,int> ssm;
            string ss = s.substr(i,k);
            for (int j = 0; j < ss.length(); j++)
            {
                c = ss[j];
                ssm[ss[j]]++;
            }
            if (ssm.size()==1)
            {
                if (i==0&&i+k>n-1)
                {
                    return true;
                }
                if (i==0&&s[i+k]!=c)
                {
                    return true;
                }
                if (i+k==n&&i==0)
                {
                    return true;
                }
                if (i+k==n&&c!=s[i-1])
                {
                    return true;
                }
                if (i!=0&&i+k!=n&&s[i-1]!=c&&s[i+k]!=c)
                {
                    return true;
                }
            }
        }
        return false;    
    }
};
