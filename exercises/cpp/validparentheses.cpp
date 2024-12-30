/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> s_;
        s_.push(s[0]);
        int n = s.length();
        for (int i = 1; i < n; i++)
        {
            cout << s_.size() << " ";
            if (s_.size() >= 1)
            {
                if (s_.top() == '{' && s[i] == '}')
                {
                    s_.pop();
                }
                else if (s_.top() == '[' && s[i] == ']')
                {
                    s_.pop();
                }
                else if (s_.top() == '(' && s[i] == ')')
                {
                    s_.pop();
                }
                else 
                {
                    s_.push(s[i]);
                }
            }
            else 
            {
                s_.push(s[i]);
            }
        }    
        return s_.size() == 0;
    }
};
