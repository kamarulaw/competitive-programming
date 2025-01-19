/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkZeroOnes(string s) 
    {
        if (s.length() == 1)
        {
            return s.compare("1") == 0;
        }
        int n = s.length();
        int maxone = INT_MIN;
        int maxzero = INT_MIN;
        int onecount = 0;
        int zerocount = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1' && s[i-1] == '1')
            {
                onecount++;
                maxone = max(maxone,onecount);
            }
            if (s[i] == '0' && s[i-1] == '0')
            {
                zerocount++;
                maxzero = max(maxzero,zerocount);
            }
            if (s[i] != s[i-1])
            {
                onecount = 0;
                zerocount = 0;
            }
        }    
        if (maxone > maxzero)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
