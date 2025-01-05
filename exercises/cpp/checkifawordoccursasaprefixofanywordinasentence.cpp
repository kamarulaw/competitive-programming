/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        int n = sentence.length();
        string word = "";
        vector<string> words;
        for (int i = 0; i < n; i++)
        {
            if (sentence[i] == ' ' && word.length() > 0)
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word += sentence[i];
            }
        }
        if (word.length() > 0)
        {
            words.push_back(word);
        }    
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i].length() >= searchWord.length() && words[i].substr(0,searchWord.length()).compare(searchWord) == 0)
            {
                return i+1;
            }
        }
        return -1;
    }
};
