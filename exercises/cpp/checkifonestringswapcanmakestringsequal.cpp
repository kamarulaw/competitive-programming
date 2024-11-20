/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int nctd = 0;
        if (s1.length() != s2.length())
        {
            return false;
        }
        map<char,int> m1;
        map<char,int> m2;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[i])
            {
                nctd++;
            }
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        for (auto it: m1)
        {
            if (it.second != m2[it.first])
            {
                return false;
            }
        }
        for (auto it: m2)
        {
            if (it.second != m1[it.first])
            {
                return false;
            }
        }
        return nctd == 2 || nctd == 0;
    }
};
