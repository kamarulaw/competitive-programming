/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countVowelSubstrings(string word) 
    {
        int n = word.size();
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 5; j <= n-i; j++)
            {
                map<char,int> m;
                string ss = word.substr(i,j);
                for (int k = 0; k < ss.length(); k++)
                {
                    m[ss[k]]++;
                }
                if (m['a'] >= 1 && m['e'] >= 1 && m['i'] >= 1 && m['o'] >= 1 && m['u'] >= 1 && m.size() == 5)
                {
                    sol++;
                }
            }
        }
        return sol;    
    }
};
