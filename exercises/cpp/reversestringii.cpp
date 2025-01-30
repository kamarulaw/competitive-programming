/* SOLUTION 1 */
/* psf */
class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int cc = 0;
        string sol = "";
        string curr = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (i+1 % k == 0 && (i+1)/2 % k == 0)
            {
                curr += s[i]; reverse(curr.begin(),curr.end()); sol += curr; curr = ""; 
            }
            else 
            {
                curr += s[i];
            }
        }
        if (curr.length() > 0)
        {
            sol += curr;
        }
        return sol;
    }
};
