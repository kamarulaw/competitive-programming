/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int rearrangeCharacters(string s, string target) 
    {
        map<char,int> tmap;
        map<char,int> smap;
        for (int i = 0; i < target.length(); i++)
        {
            tmap[target[i]]++;
        }    
        for (int i = 0; i < s.length(); i++)
        {
            smap[s[i]]++;
        }
        int sol = INT_MAX;
        for (auto it: tmap)
        {
            sol = min(sol, smap[it.first] / tmap[it.first]);
        }
        return sol;
    }
};
