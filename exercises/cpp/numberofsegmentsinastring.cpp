/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countSegments(string s) 
    {
        int sol = 0;
        string curr = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && curr.length() >= 1)
            {
                bool flag = true;
                for (int j = 0; j < curr.length(); j++)
                {
                    if (curr[j] == ' ')
                    {
                        flag = false;
                    }
                } 
                if (flag)
                {
                    sol++;
                }
                curr = "";
            }
            else if (s[i] != ' ')
            {
                curr += s[i]; 
            }
        }
        if (curr.length() >= 1)
        {
            bool flag = true;
            for (int j = 0; j < curr.length(); j++)
            {
                if (curr[j] == ' ')
                {
                    flag = false;
                }
            }
            if (flag)
            {
                sol++;
            }
        }     
        return sol; 
    }
};
