/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        if (s1.length() > s2.length())
        {
            return false;
        }
        map<char,int> m;
        map<char,int> ref;
        for (int i = 0; i < s1.length(); i++)
        {
            ref[s1[i]]++;
        }
        for (int i = 0; i <= s2.length() - s1.length(); i++)
        {
            for (int j = 0; j < s1.length(); j++)
            {
                if (j == 0)
                {
                    cout << i + j << " ";
                }
                if (j == s1.length() - 1)
                {
                    cout << i + j << endl;
                }
                m[s2[i+j]]++;
                if (j == s1.length() - 1)
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
                        return true;
                    }
                }
            }
            m.clear();
        }
        return false;
    }
};
