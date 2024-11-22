/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 38 of 48 */
class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if (s.length() != t.length())
        {
            return false;
        }
        int n = s.length();
        map<char,int> smap;
        map<char,int> tmap;
        for (int i = 0; i < n; i++)
        {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        vector<int> svalvec;
        vector<int> tvalvec;
        for (auto it: smap)
        {
            svalvec.push_back(it.second);
        }
        for (auto it: tmap)
        {
            tvalvec.push_back(it.second);
        }
        if (svalvec.size() != tvalvec.size())
        {
            return false;
        }
        int k = svalvec.size();
        sort(svalvec.begin(), svalvec.end()); 
        sort(tvalvec.begin(), tvalvec.end());
        for (int i = 0; i < k; i++)
        {
            if (svalvec[i] != tvalvec[i])
            {
                return false;
            }
        }
        return true;
    }
};
