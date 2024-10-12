/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool chardig(char c)
    {
        return c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0';
    }

    string clearDigits(string s) 
    {
        stack<int> chars; 
        
        for (int i = 0; i < s.length(); i++)
        {
            if (!chardig(s[i]))
            {
                chars.push(s[i]);
            }
            else 
            {
                chars.pop();
            }
        }

        string result = "";

        while (chars.size() > 0)
        {
            result += chars.top();
            chars.pop();
        }

        int n = result.length();
        for (int i = 0; i < n / 2; i++)
        {
            char tmp = result[n-i-1];
            result[n-i-1] = result[i]; 
            result[i] = tmp;
        }

        return result;
    }
};
