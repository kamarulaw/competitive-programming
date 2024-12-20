/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string makeGoodUtil(string s)
    {
        int n = s.length();
        string s_ = "";
        vector<int> excluded_indices;
        for (int i = 1; i < n; i++)
        {
            if (tolower(s[i]) == s[i-1] && s[i] != tolower(s[i]))
            {
                excluded_indices = {i-1,i};
                break;
            }
            else if (toupper(s[i]) == s[i-1] && s[i] != toupper(s[i]))
            {
                excluded_indices = {i-1,i}; 
                break;
            }
        }
        if (excluded_indices.size() == 0)
        {
            return s;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (i != excluded_indices[0] && i != excluded_indices[1])
                {
                    s_ += s[i];
                }
            }
        }
        return s_;
    }

    string makeGood(string s) 
    {    
        while (s != makeGoodUtil(s))
        {
            s = makeGoodUtil(s);
        }
        return s;
    }
};
