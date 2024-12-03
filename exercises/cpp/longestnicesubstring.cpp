/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string longestNiceSubstring(string s) 
    {
        string ans = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                map<char,set<char>> ssm;
                string ss = s.substr(i,j);
                for (int k = 0; k < ss.length(); k++)
                {
                    ssm[tolower(ss[k])].emplace(ss[k]);
                }
                bool lpfa = true;
                for (auto it : ssm)
                {
                    if (it.second.size() != 2)
                    {
                        lpfa = false;
                    }
                }
                if (lpfa == true && ss.length() > ans.length())
                {
                    ans = ss;
                }
            }
        }   
        return ans; 
    }
};
