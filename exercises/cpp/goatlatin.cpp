/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string toGoatLatin(string sentence) 
    {
        int n = sentence.length();
        int a_ind = 0;
        string curr = "";
        vector<string> words;
        for (int i = 0; i < n; i++)
        {
            if (sentence[i] != ' ')
            {
                curr += sentence[i];
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
        map<char,int> m;
        m['a'] = 1;
        m['e'] = 1;
        m['i'] = 1;
        m['o'] = 1;
        m['u'] = 1;
        m['A'] = 1;
        m['E'] = 1;
        m['I'] = 1;
        m['O'] = 1;
        m['U'] = 1;
        string sol = "";
        for (int i = 0; i < words.size(); i++)
        {
            if (m[words[i][0]] == 1)
            {
                sol += words[i]; sol += 'm'; for (int j = 0; j <= i+1; j++) {sol += 'a';}
                
            }
            else 
            {
                sol += words[i].substr(1,words[i].length()-1); sol += words[i][0]; sol += 'm';  for (int j = 0; j <= i+1; j++) {sol += 'a';}
            }
            if (i != words.size()-1)
            {
                sol += ' ';
            }
        }
        return sol;    
    }
};
