/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkRecord(string s) 
    {
        int ac = 0;
        int clc = 0;
        if (s[0] == 'A')
        {
            ac++;
        }
        for (int i = 1; i < s.length(); i++)    
        {
            if (s[i] != 'L')
            {
                clc = 0;
            }
            if (s[i] == s[i-1] && s[i] == 'L')
            {
                if (clc == 0)
                {
                    clc = 2;
                }
                else 
                {
                    clc++;
                }
                if (clc >= 3)
                {
                    return false;
                }
            }
            if (s[i] == 'A')
            {
                ac++;
            }
            if (ac >= 2)
            {
                return false;
            }
        }
        return true;
    }
};
