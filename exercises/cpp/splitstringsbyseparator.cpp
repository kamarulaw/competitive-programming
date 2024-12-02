/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) 
    {
        vector<string> sol;
        for (int i = 0; i < words.size(); i++)
        {
            string curr = "";
            string word = words[i];
            for (int j = 0; j < word.size(); j++)
            {
                if (word[j] != separator)
                {
                    curr += word[j];
                }
                if (word[j] == separator && curr.length() > 0)
                {
                    sol.push_back(curr);
                    curr = "";
                }
                if (j == word.size() - 1 && curr.length() > 0)
                {
                    sol.push_back(curr);
                }
            }
        }  
        return sol;  
    }
};
