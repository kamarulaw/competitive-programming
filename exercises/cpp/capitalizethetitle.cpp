/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string capitalizeTitle(string title) 
    {
        string curr = "";
        vector<string> words;
        for (int i = 0; i < title.length(); i++)
        {
            if (title[i] == ' ' && curr.length() > 0)
            {
                words.push_back(curr);
                curr = "";
            }
            else 
            {
                curr += title[i];
            }
        }
        if (curr.length() > 0)
        {
            words.push_back(curr);
        }
        string sol = "";
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].length() < 3)
            {
                string letters = "";
                for (int j = 0; j < words[i].length(); j++)
                {
                    letters += tolower(words[i][j]);
                }
                sol += letters;
            }
            else 
            {
                string letters = "";
                letters += toupper(words[i][0]);
                for (int j = 1; j < words[i].length(); j++)
                {
                    letters += tolower(words[i][j]);
                }
                sol += letters; 
            }
            if (i != words.size() - 1)
            {
                sol += ' ';
            }
        }   
        return sol;
    }
};
