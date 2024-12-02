/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) 
    {
        int n = words.size();
        map<string,int> ssmap;
        for (int i = 0; i < n; i++)
        {
            string word = words[i];
            for (int j = 0; j < word.length(); j++)
            {
                for (int k = 1; k <= word.length()-j; k++)
                {
                    if (j == 0 && k == word.length())
                    {
                        continue;
                    }
                    else 
                    {
                        ssmap[word.substr(j,k)]++;
                    }
                }
            }
        }
        vector<string> sol;
        for (int i = 0; i < words.size(); i++)
        {
            if (ssmap[words[i]] >= 1)
            {
                sol.push_back(words[i]);
            }
        }    
        return sol;
    }
};
