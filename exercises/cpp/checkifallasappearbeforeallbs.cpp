/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkString(string s) 
    {
        vector<int> ainds;
        vector<int> binds;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                ainds.push_back(i);
            }
            else 
            {
                binds.push_back(i);
            }
        }    
        if (ainds.size() == 0 || binds.size() == 0 || ainds[ainds.size()-1] < binds[0])
        {
            return true;
        }
        return false;
    }
};
