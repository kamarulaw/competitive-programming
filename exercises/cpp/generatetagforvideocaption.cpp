/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    char toLower(char c)
    {
        if ((int)'a' <= (int)c && (int)c <= (int)'z')
        {
            return c;
        }
        else
        {
            return char((int)'a' + (int)c - (int)'A');
        }
    }

    char toUpper(char c)
    {
        if ((int)'A' <= (int)c && (int)c <= (int)'Z')
        {
            return c;
        }
        else 
        {
            return char((int)'A' + (int)c - (int)'a');
        }
    }

    string generateTag(string caption) 
    {
        vector<string> words; 
        int index = 0;
        int n = caption.length();
        string currword = "";    
        while (index < n)
        {
            if (caption[index] != ' ')
            {
                currword.push_back(caption[index]);
            }
            else
            {
                if (currword.length() > 0)
                {
                    words.push_back(currword);
                    currword = "";
                }
            }
            index++;
        }
        if (currword.length() > 0)
        {
            words.push_back(currword);
        }
        string result = "";
        result.push_back('#');
        for (int i = 0; i < words.size(); i++)
        {
            currword = words[i];
            for (int j = 0; j < currword.length(); j++)
            {
                if (result.length() == 100)
                {
                    return result;
                }
                if (i == 0)
                {
                    result.push_back(toLower(currword[j]));
                }
                else 
                {
                    if (j == 0)
                    {
                        result.push_back(toUpper(currword[j]));
                    }
                    else
                    {
                        result.push_back(toLower(currword[j]));
                    }
                }
            }
        }
        return result;
    }
};
