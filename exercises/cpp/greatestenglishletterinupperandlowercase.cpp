/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string greatestLetter(string s) 
    {
        map<char,set<char>> m;
        for (int i = 0; i < s.length(); i++)
        {
            m[tolower(s[i])].emplace(s[i]);
        }    
        string sol = "";
        int max = INT_MIN;
        for (auto it: m)
        {
            vector<char> vset(it.second.begin(), it.second.end());
            if (vset.size() > 1 && (int)vset[1] > max)
            {
                max = (int)vset[1];
                sol = toupper(vset[1]);
            }
        }
        return sol;
    }
};
