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

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char> sol;
        sol.push(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            if (sol.size() >= 1 && sol.top() == s[i])
            {
                sol.pop();
            }
            else 
            {
                sol.push(s[i]);
            }
        }
        string ssol = "";
        while (sol.size() > 0)
        {
            ssol += sol.top(); sol.pop();
        }
        reverse(ssol.begin(), ssol.end()); 
        return ssol;
    }
};
