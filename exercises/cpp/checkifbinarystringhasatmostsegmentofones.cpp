/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkOnesSegment(string s) 
    {
        if (s.compare("1") == 0)
        {
            return true;
        }
        int ncs = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            else 
            {
                if (count >= 1)
                {
                    ncs++;
                    count = 0;
                }
            }
        }
        if (count >= 1)
        {
            ncs++;
        }
        return ncs == 1;    
    }
};
