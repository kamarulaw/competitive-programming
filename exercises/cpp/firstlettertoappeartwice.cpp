/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    char repeatedCharacter(string s) 
    {
        int n = s.length(); 
        map<char,int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
            if (m[s[i]] == 2)
            {
                return s[i];
            }
        }
        return ' '; 
    }
};
