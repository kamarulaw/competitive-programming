/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool buddyStrings(string s, string goal) 
    {
        bool alocr = false;
        int charsthatdiffer = 0;
        map<char,int> smap;
        map<char,int> gmap;
        for (int i = 0; i < s.length(); i++)
        {
            smap[s[i]]++;
        }    
        for (int i = 0; i < goal.length(); i++)
        {
            gmap[goal[i]]++;
        }
        if (s.length() != goal.length())
        {
            return false;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != goal[i])
            {
                charsthatdiffer++;
            }
        }
        for (auto it: smap)
        {
            if (it.second != gmap[it.first])
            {
                return false;
            }
            if (it.second > 1)
            {
                alocr = true;
            }
        }
        for (auto it: gmap)
        {
            if (it.second != smap[it.first])
            {
                return false;
            }
            if (it.second > 1)
            {
                alocr = true;
            }
        }
        if (s.compare(goal) == 0 && alocr == false)
        {
            return false;
        }
        if (charsthatdiffer > 2)
        {
            return false;
        }
        return true;
    }
};
