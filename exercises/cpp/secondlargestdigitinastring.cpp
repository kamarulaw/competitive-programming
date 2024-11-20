/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int secondHighest(string s) 
    {
        set<int> digits;
        for (int i = 0; i < s.length(); i++)
        {
            if (0 <= s[i] - '0' && s[i] - '0' <= 9)
            {
                digits.emplace(s[i] - '0');
            }
        }
        if (digits.size() <= 1)
        {
            return -1;
        }
        vector<int> vdigits(digits.begin(), digits.end()); sort(vdigits.begin(), vdigits.end()); reverse(vdigits.begin(), vdigits.end());
        return vdigits[1];    
    }
};
