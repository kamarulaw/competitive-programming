/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isCircularSentence(string sentence) 
    {
        string word = "";
        vector<string> words; 
        for (int i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] == ' ')
            {
                if (word.length() > 0)
                {
                    words.push_back(word);
                }
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
        if (words.size() == 1)
        {
            if (words[0][0] == words[0][words[0].length()-1])
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
        for (int i = 0; i < words.size()-1; i++)
        {
            if (words[i][words[i].length()-1] != words[i+1][0])
            {
                return false;
            }
        }
        int n = words.size();
        if (words[n-1][words[n-1].length()-1] != words[0][0])
        {
            return false;
        }
        return true;
    }
};
