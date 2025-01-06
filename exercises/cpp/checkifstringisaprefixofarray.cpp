/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        string curr = "";
        map<string,int> m;
        for (int i = 0; i < words.size(); i++)
        {
            curr += words[i];
            m[curr] = 1;
        }    
        return m[s] == 1;
    }
};
