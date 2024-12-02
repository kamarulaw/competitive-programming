/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) 
    {
        map<char,vector<int>> m;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]].push_back(i);
        }    
        for (auto it : m)
        {
            if (it.second[1] - it.second[0] - 1 != distance[it.first - 'a'])
            {
                return false;
            }
        }
        return true;
    }
};
