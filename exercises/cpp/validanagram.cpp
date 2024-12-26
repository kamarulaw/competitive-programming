/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length())
        {
            return false;
        }    
        int n = s.length();
        map<char,int> ms_;
        map<char,int> mt_;
        for (int i = 0; i < n; i++)
        {
            ms_[s[i]]++;
            mt_[t[i]]++;
        }
        for (auto it : ms_)
        {
            if (mt_[it.first] != it.second)
            {
                return false;
            }
        }
        for (auto it : mt_)
        {
            if (ms_[it.first] != it.second)
            {
                return false;
            }
        }
        return true;
    }
};
