/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findPermutationDifference(string s, string t) 
    {
        int sol = 0;
        int len = s.length();
        map<char,int> n;
        map<char,int> m;
        for (int i = 0; i < len; i++)
        {
            n[s[i]] = i;
            m[t[i]] = i;
        }
        for (auto it : n)
        {
            sol += abs(it.second - m[it.first]);
        }    
        return sol;
    }
};
