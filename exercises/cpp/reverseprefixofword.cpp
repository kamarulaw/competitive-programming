/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int n = word.length();
        int ch_ind = INT_MIN;
        stack<char> chars_up_to_ch;
        for (int i = 0; i < n; i++)
        {
            if (word[i] != ch)
            {
                chars_up_to_ch.push(word[i]);
            }
            else if (word[i] == ch)
            {
                chars_up_to_ch.push(word[i]);
                ch_ind = i;
                break;
            }
        }

        if (ch_ind == INT_MIN)
        {
            return word;
        }

        string result = "";

        for (int i = 0; i <= ch_ind; i++)
        {
            result += chars_up_to_ch.top();
            chars_up_to_ch.pop();
        }    

        for (int i = ch_ind+1; i < n; i++)
        {
            result += word[i];
        }

        return result;
    }
};

/* SOLUTION 1 RE-FACTORED */ 
/* ? */
class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int n = word.length();
        int ch_ind = INT_MIN;
        stack<char> chars_up_to_ch;
        for (int i = 0; i < n; i++)
        {
            chars_up_to_ch.push(word[i]);
            if (word[i] == ch)
            {
                ch_ind = i;
                break;
            }
        }

        if (ch_ind == INT_MIN)
        {
            return word;
        }

        string result = "";

        for (int i = 0; i <= ch_ind; i++)
        {
            result += chars_up_to_ch.top();
            chars_up_to_ch.pop();
        }    

        for (int i = ch_ind+1; i < n; i++)
        {
            result += word[i];
        }

        return result;
    }
};
