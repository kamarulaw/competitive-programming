/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int possibleStringCount(string word) 
    {
        int sol = 1;
        int n = word.length();
        map<char,set<int>> m;
        for (int i = 1; i < n; i++)
        {
            if (word[i] == word[i-1])
            {
                m[word[i]].emplace(i-1);
                m[word[i]].emplace(i);
            }
            else 
            {
                for (auto it : m)
                {
                    if (it.second.size() > 1)
                    {
                        sol += (it.second.size() - 1); 
                    }
                    m.erase(it.first);
                }
            }
        }    
        for (auto it : m)
        {
            if (it.second.size() > 1)
            {
                sol += (it.second.size() - 1);
            }
            m.erase(it.first);
        }
        return sol;
    }
};
