/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        int n = s.length();
        vector<int> letterinds;
        for (int i = 0; i < n; i++)
        {
            int k = (int)s[i];
            if (((int)'a' <= k && k <= (int)'z') || ((int)'A' <= k && k <= (int)'Z'))
            {
                letterinds.push_back(i);
            }
        }
        int numalpha = letterinds.size();
        for (int i = 0; i < numalpha / 2; i++)
        {
            int tmp = letterinds[i];
            letterinds[i] = letterinds[numalpha-i-1];
            letterinds[numalpha-i-1] = tmp;
        }
        int alphaind = 0;
        string sol;
        for (int i = 0; i < n; i++)
        {
            int k = (int)s[i];
            if (((int)'a' <= k && k <= (int)'z') || ((int)'A' <= k && k <= (int)'Z'))
            {
                sol += s[letterinds[alphaind]];
                alphaind++;
            }
            else 
            {
                sol += s[i];
            }
        }
        return sol;
    }
};
