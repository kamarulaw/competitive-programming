/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string minimizedStringLengthUtil(string s)
    {
        vector<int> excluded_indices;
        for (int i = 0; i < s.length()-1; i++)
        {
            for (int j = i+1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    excluded_indices = {i,j};
                    break;
                }
            }
        }
        if (excluded_indices.size() == 0)
        {
            return s;
        }
        else
        {
            string s_ = "";
            for (int i = 0; i < s.length(); i++)
            {
                if (i != excluded_indices[0] && i != excluded_indices[1])
                {
                    s_ += s[i];
                }
            }
            return s_;
        }
    }

    int minimizedStringLength(string s) 
    {
        map<char,vector<int>> m;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]].push_back(i);
        }
        return m.size();
    }
};
