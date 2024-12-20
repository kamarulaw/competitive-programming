/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 104 of 106 */
class Solution {
public:
    string removeDuplicatesUtil(string s)
    {
        vector<int> excluded;
        for (int i = 0; i < s.length()-1; i++)
        {
            if (s[i] == s[i+1])
            {
                excluded = {i,i+1};
                break;
            }
        }
        if (excluded.size() == 0)
        {
            return s;
        }
        string s_ = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (i != excluded[0] && i != excluded[1])
            {
                s_ += s[i];
            }
        }
        return s_;
    }
    
    string removeDuplicates(string s) 
    {
        while (s != removeDuplicatesUtil(s))
        {
            s = removeDuplicatesUtil(s);
        }
        return s;
    }
};
