/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) 
    {
        int n = word.length();
        int ans = 0;
        vector<string> substrings;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                substrings.push_back(word.substr(i,j));
            }
        }
        for (int i = 0; i < patterns.size(); i++)
        {
            for (int j = 0; j < substrings.size(); j++)
            {
                bool pat_ischar = false;
                bool sub_ischar = false;
                if (patterns[i].length() == 1)
                {
                    pat_ischar = true;
                }
                if (substrings[j].length() == 1)
                {
                    sub_ischar = true;
                }
                if ( (sub_ischar == true && pat_ischar == true && patterns[i] == substrings[j]) ||
                     (sub_ischar == false && pat_ischar == false && patterns[i].compare(substrings[j]) == 0) )
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;    
    }
};
