/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) 
    {
        int sol = 0;
        map<string,int> m;
        string prefix = ""; 
        for (int i = 0; i < s.length(); i++)
        {
            prefix += s[i];
            m[prefix] = 1;
        }   
        for (int i = 0; i < words.size(); i++)
        {
            if (m[words[i]] == 1)
            {
                sol++;
            }
        }
        return sol;
    }
};
