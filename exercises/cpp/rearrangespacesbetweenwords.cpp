/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string reorderSpaces(string text) 
    {
        int ns = 0;
        string word = "";
        vector<string> words;
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == ' ')
            {
                ns++;
                if (word.length() > 0)
                {
                    words.push_back(word);
                }
                word = "";
            }
            else
            {
                word += text[i];
            }
        } 
        if (word.length() > 0)
        {
            words.push_back(word);
        }
        if (words.size() == 1 && ns == 0)
        {
            return words[0];
        }
        string sol = "";
        if (words.size() == 1 && ns != 0)
        {
            sol += words[0];
            for (int j = 0; j < ns; j++)
            {
                sol += ' ';
            } 
            return sol;
        }
        int spaces_after_general = ns / (words.size()-1);
        int spaces_after_last_word = ns % (words.size()-1);
        for (int i = 0; i < words.size(); i++)
        {
            sol += words[i];
            if (i != words.size()-1)
            {
                for (int j = 0; j < spaces_after_general; j++)
                {
                    sol += ' ';
                }
            }
        }
        for (int j = 0; j < spaces_after_last_word; j++)
        {
            sol += ' ';
        }
        return sol;
    }
};
