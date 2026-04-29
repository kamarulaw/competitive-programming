/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    bool isLC(char c)
    {
        return (int)'a' <= (int)c && (int)c <= (int)'z'; 
    }

    string reverseByType(string s) 
    {
        int n = s.length();
        string lcs = "";
        string nlcs = "";
        map<int,int> lcim;
        for (int i = 0; i < n; i++)
        {
            if (isLC(s[i]))
            {
                lcim[i] = 1;
                lcs.push_back(s[i]);
            }
            else 
            {
                nlcs.push_back(s[i]);
            }
        }
        reverse(lcs.begin(),lcs.end());
        reverse(nlcs.begin(), nlcs.end());
        int L = 0;
        int NL = 0;
        string result = "";
        for (int i = 0; i < n; i++)
        {
            if (lcim[i] == 1)
            {
                result.push_back(lcs[L]); L++;
            }
            else 
            {
                result.push_back(nlcs[NL]); NL++;
            }
        }
        return result;
    }
};
