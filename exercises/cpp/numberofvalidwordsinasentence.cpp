/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countValidWords(string sentence) 
    {
        string currword = "";
        int n = sentence.length();
        vector<string> groupedtokens;
        for (int i = 0; i < n; i++)
        {
            if (sentence[i] != ' ')
            {
                currword += sentence[i];
            }
            if (sentence[i] == ' ' && currword.length() > 0)
            {
                groupedtokens.push_back(currword); currword = "";
            }
        }
        if (currword.length() > 0)
        {
            groupedtokens.push_back(currword);
        }
        int ans = 0;
        n = groupedtokens.size();
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            int hyphencount = 0;
            currword = groupedtokens[i];
            if (currword[currword.length()-1] == '.' || currword[currword.length()-1] == '!' || currword[currword.length()-1] == ',')
            {
                currword = currword.substr(0,currword.length()-1);
            }
            for (int j = 0; j < currword.length(); j++)
            {
                if ((j == 0 || j == currword.length()-1) && currword[j] == '-')
                {
                    flag = false;
                }
                char c = currword[j];
                if (!(((int)'a' <= (int)c && (int)c <= (int)'z') || ((int)'A' <= (int)c && (int)c <= (int)'Z') || (c == '-')))
                {
                    flag = false;
                }
                if (c == '-')
                {
                    hyphencount++;
                }
            }
            if (flag == true && hyphencount <= 1)
            {
                cout << currword << " ";
                ans++;
            }
        }
        cout << endl;
        return ans;
    }
};
