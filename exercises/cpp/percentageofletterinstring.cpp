/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int percentageLetter(string s, char letter) 
    {
        int count = 0;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i]==letter)
            {
                count++;
            }
        }
        int frac = floor((double)count*100/n);    
        return frac;
    }
};
