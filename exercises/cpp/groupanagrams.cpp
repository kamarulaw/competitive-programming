/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        int n = strs.size();
        map<map<char,int>,vector<string>> m;
        for (int i = 0; i < n; i++)
        {
            map<char,int> m_;
            string str = strs[i];
            for (int i = 0; i < str.length(); i++)
            {
                m_[str[i]]++;
            }
            m[m_].push_back(str);
        }
        vector<vector<string>> sol;
        for (auto it: m)
        {
            sol.push_back(it.second);
        }
        return sol;
    }
};
