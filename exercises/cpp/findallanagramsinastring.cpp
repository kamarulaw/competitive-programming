/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        if (p.length() > s.length())
        {
            return {};
        }
        map<char,int> m;
        map<char,int> ref;
        vector<int> solutions;
        for (int i = 0; i < p.length(); i++)
        {
            ref[p[i]]++;
        }
        for (int i = 0; i <= s.length() - p.length(); i++)
        {
            for (int j = 0; j < p.length(); j++)
            {
                m[s[i+j]]++;
                if (j == p.length() - 1)
                {
                    bool flag = true;
                    for (auto it : m)
                    {
                        if (it.second != ref[it.first])
                        {
                            flag = false;
                            break;
                        }
                    }
                    for (auto it : ref)
                    {
                        if (it.second != m[it.first])
                        {
                            flag = false;
                            break;
                        }
                    }
                    if (flag == true)
                    {
                        solutions.push_back(i);
                    }
                }
            }
            m.clear();
        }    
        return solutions;
    }
};
