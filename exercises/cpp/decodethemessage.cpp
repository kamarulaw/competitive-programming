/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string decodeMessage(string key, string message) 
    {
        int n = key.length();
        map<char,vector<char>> m;
        char startchar = 'a';
        for (int i = 0; i < n; i++)
        {
            if (key[i] != ' ' && m[key[i]].size() == 0)
            {
                m[key[i]].push_back(startchar);
                startchar = char((int)startchar + 1);
            }
        }
        string sol = "";
        n = message.length();
        for (int i = 0; i < n; i++)
        {
            if (message[i] == ' ')
            {
                sol += ' ';
            }
            else
            {
                sol += m[message[i]][0];
            }
        }
        return sol;
    }
};
