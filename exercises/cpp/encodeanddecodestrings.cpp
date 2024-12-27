/* SOLUTION 1 */
/* psf */
class Solution {
public:

    string encode(vector<string>& strs) 
    {
        if (strs.size() == 0)
        {
            return "";
        }
        int n = strs.size();
        string encoded_string = "";
        for (int i = 0; i < n; i++)
        {
            encoded_string += strs[i];
            if (i != n-1)
            {
                encoded_string += '|';
            }
        }
        return encoded_string;
    }

    vector<string> decode(string s) 
    {
        if (s.length() == 0)
        {
            return {};
        }
        string word = "";
        int n = s.length();
        vector<string> strs;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '|')
            {
                word += s[i];
            }
            else 
            {
                if (word.length() > 0)
                {
                    strs.push_back(word);
                    word = "";
                }
            }
        }
        if (word.length() > 0)
        {
            strs.push_back(word);
        }
        return strs;
    }
};
