/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int numberOfSpecialChars(string word) 
    {
        int sol = 0;
        map<char,set<char>> m;
        for (int i = 0; i < word.size(); i++)
        {
            m[tolower(word[i])].emplace(word[i]);
        }
        for (auto it: m)
        {
            if (it.second.size() == 2)
            {
                sol++;
            }
        }   
        return sol;
    }
};
