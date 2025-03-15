/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    string helper(string s)
    {
        int n = s.length();
        string sol = "";
        map<int,char> m;
        m[0]='0';
        m[1]='1';
        m[2]='2';
        m[3]='3';
        m[4]='4';
        m[5]='5';
        m[6]='6';
        m[7]='7';
        m[8]='8';
        m[9]='9';
        for (int i = 0; i < n-1; i++)
        {
            int left = s[i] - '0';
            int rght = s[i+1] - '0';
            int mod_ = (left+rght)%10;
            sol += m[mod_];
        }
        return sol;
    }

    bool hasSameDigits(string s) 
    {
        while (s.length()!=2)
        {
            s = helper(s);
        }
        return s[0]==s[1];
    }
};
