/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) 
    {
        int sol = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j=1; j <= n-i; j++)
            {
                string ss = s.substr(i,j);
                int zc = 0;
                int oc = 0;
                bool onefound = false;
                for (int k = 0; k < ss.length(); k++)
                {
                    if (ss[k]=='0')
                    {
                        if (onefound==true)
                        {
                            break;
                        }
                        zc++;
                    }
                    if (ss[k]=='1')
                    {
                        oc++;
                        onefound = true;
                    }
                    if (zc==oc)
                    {
                        sol = max(sol,zc*2);
                    }
                }
            }
        }
        return sol;   
    }
};
