/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool canBeEqual(string s1, string s2) 
    {
        string s1c = s1;
        vector<string> s1s; 
        s1s.push_back(s1);
        char tmp = s1[2];
        s1[2] = s1[0];
        s1[0] = tmp;
        s1s.push_back(s1);
        tmp = s1[3];
        s1[3] = s1[1];
        s1[1] = tmp;    
        s1s.push_back(s1);
        tmp = s1c[3];
        s1c[3] = s1c[1];
        s1c[1] = tmp;    
        s1s.push_back(s1c);
        tmp = s1c[2];
        s1c[2] = s1c[0];
        s1c[0] = tmp;
        for (int i  = 0; i < s1s.size(); i++)
        {
            if (s2.compare(s1s[i]) == 0)
            {
                return true;
            }
        }
        return false;
    }
};
