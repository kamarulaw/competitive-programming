/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string replaceDigits(string s) 
    {
        int n = s.length();
        for (int i = 1; i < n; i+=2)
        {
            s[i] = char((int)s[i-1] + (s[i] - '0'));
        }
        return s;
    }
};
