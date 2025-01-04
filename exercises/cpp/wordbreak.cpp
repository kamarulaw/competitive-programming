/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 37 of 47 */
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        map<string,int> m;
        for (int i = 0; i < wordDict.size(); i++)
        {
            m[wordDict[i]] = 1;
        }   
        string word = ""; 
        for (int i = 0; i < s.length(); i++)
        {
            if (word.length() > 0 && m[word] == 1)
            {
                word = "";
            }
            word += s[i];
        }
        cout << word << endl;
        if (word.length() > 0 && m[word] == 1)
        {
            return true;
        }
        return false;
    }
};
