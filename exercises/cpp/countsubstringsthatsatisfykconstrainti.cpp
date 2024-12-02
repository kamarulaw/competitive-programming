/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) 
    {
        int sol = 0;
        int n = s.length();
        vector<string> substrings; 
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                substrings.push_back(s.substr(i,j));
            }
        }   
        for (int i = 0; i < substrings.size(); i++)
        {
            int oc = 0;
            int zc = 0;
            for (int j = 0; j < substrings[i].length(); j++)
            {
                if (substrings[i][j] == '1')
                {
                    oc++;
                }
                else 
                {
                    zc++;
                }
            }
            if (oc <= k || zc <= k)
            {
                sol++;
            }
        }
        return sol;
    }
};
