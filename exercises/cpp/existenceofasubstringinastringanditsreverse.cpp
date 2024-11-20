/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isSubstringPresent(string s) 
    {
        int n = s.length();
        reverse(s.begin(), s.end());
        string rev = s;
        reverse(s.begin(), s.end());
        for (int i = 0; i < n-2+1; i++)
        {
            string substr = s.substr(i, 2);
            for (int j = 0; j < rev.size()-1; j++)
            {
                if (substr[0] == rev[j] && substr[1] == rev[j+1])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
