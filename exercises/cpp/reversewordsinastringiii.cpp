/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string reverseWords(string s) 
    {
        string sol = "";
        string curr = "";
        int n = s.length();
        vector<string> words;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ')
            {
                curr += s[i];
            }
            else 
            {
                words.push_back(curr); curr = ""; 
            }
        }
        if (curr.length() > 0)
        {
            words.push_back(curr);
        }
        for (int i = 0; i < words.size(); i++)
        {
            reverse(words[i].begin(),words[i].end()); sol += words[i]; if (i != words.size()-1) {sol += ' ';}
        }
        return sol;
    }
};
