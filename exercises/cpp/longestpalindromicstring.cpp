/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 78 of 142 */ 
class Solution {
public:
    string longestPalindrome(string s) 
    {
        string lps = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                string sstr = s.substr(i,j);
                bool palindromic = true;
                for (int k = 0; k < sstr.length()/2; k++)
                {
                    if (sstr[k] != sstr[sstr.length()-1-k])
                    {
                        palindromic = false;
                    }
                }
                if (palindromic == true && sstr.length() > lps.length())
                {
                    lps = sstr;
                }
            }
        }    
        return lps;
    }
};
