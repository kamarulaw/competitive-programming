/* SOLUTION 1 */ 
/* All tests passed  */
class Solution {
public:
    bool rotateString(string s, string goal) 
    {
        map<char,int> s2;
        map<char,int> g2;
        map<char,vector<int>> s1;
        map<char,vector<int>> g1;
        char sharedcharstart;
        if (s.length() != goal.length())
        {
            return false;
        } 
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            s2[s[i]]++; 
            g2[goal[i]]++; 
            s1[s[i]].push_back(i);
            g1[goal[i]].push_back(i);
        }
        for (auto it : s2)
        {
            if (it.second >= 1 && g2[it.first] >= 1)
            {
                sharedcharstart = it.first;
                break;
            }
        }
        for (int i = 0; i < s1[sharedcharstart].size(); i++)
        {
            for (int j = 0; j < g1[sharedcharstart].size(); j++)
            {
                int ii = s1[sharedcharstart][i];
                int jj = g1[sharedcharstart][j];
                int iicounter = 0;
                int jjcounter = 0;
                bool match = true; 
                while (iicounter < n && jjcounter < n)
                {
                    iicounter++; 
                    jjcounter++;
                    if (s[ii] == goal[jj])
                    {
                        ii = (ii + 1) % n;
                        jj = (jj + 1) % n;
                    }
                    else 
                    {
                        match = false;
                        break;
                    }
                }
                if (match == true)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
