/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maxDepth(string s) 
    {
        int sol = 0;
        stack<char> st;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push('(');
                sol = max(sol,(int)st.size());
            }
            if (s[i] == ')')
            {
                if (st.top() == '(')
                {
                    st.pop();
                }
            }
        }
        return sol;    
    }
};
