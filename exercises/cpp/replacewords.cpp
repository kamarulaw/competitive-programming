/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) 
    {
        string word = "";
        map<string,int> m;
        vector<string> words;
        for (int i = 0; i < dictionary.size(); i++)
        {
            string root = dictionary[i];
            m[root] = 1;
        }
        for (int i = 0; i < sentence.length(); i++)
        {
            if (word.length() > 0 && sentence[i] == ' ')
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
        string new_sentence = "";
        for (int i = 0; i < words.size(); i++)
        {
            int j = 0;
            while (j < words[i].length() && m[words[i].substr(0,j)] != 1)
            {
                j++;
            }
            if (j == words[i].length() && m[words[i].substr(0,j)] == 1)
            {
                new_sentence += words[i].substr(0,j);
            }
            else if (j == words[i].length() && m[words[i].substr(0,j)] != 1)
            {
                new_sentence += words[i];
            }
            else if (j < words[i].length() && m[words[i].substr(0,j)] == 1)
            {
                new_sentence += words[i].substr(0,j);
            }
            else 
            {
                new_sentence += words[i];
            }
            if (i != words.size() - 1)
            {
                new_sentence += ' ';
            }
        }
        return new_sentence;
    }
};
