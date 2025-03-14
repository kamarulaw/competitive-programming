/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 23 of 382 */

class Solution {
public:
    static bool comp(string word1, string word2)
    {
        if (word1.length() != word2.length())
        {
            return word1.length() < word2.length();
        }
        else
        {
            int i = 0;
            bool diff = false;
            int n = word1.length();
            while (i<n)
            {
                if (word1[i]==word2[i])
                {
                    i++;
                    continue;
                }
                else 
                {
                    if (word1[i]<word2[i])
                    {
                        return word1[i]<word2[i];
                    }
                    else
                    {
                        return word2[i]<word1[i];
                    }
                }
            }
            return word1[n-1] < word2[n-1];
        }
    }

    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) 
    {
        int n = groups.size();
        map<int,int> m;
        vector<string> zwords;
        vector<string> owords;
        for (int i = 0; i < n; i++)
        {
            m[groups[i]]++;
            if (groups[i]==0)
            {
                zwords.push_back(words[i]);
            }
            else
            {
                owords.push_back(words[i]);
            }
        }    
        int lss = min(m[0],m[1]);
        vector<string> sol;
        sort(owords.begin(),owords.end(),comp);
        sort(zwords.begin(),zwords.end(),comp);
        for (int i = 0; i < lss; i++)
        {
            sol.push_back(zwords[i]);
            sol.push_back(owords[i]);
        }
        if (max(m[0],m[1])>lss)
        {
            if (max(m[0],m[1])==m[0])
            {
                sol.push_back(zwords[lss]);
            }
            else
            {
                sol.push_back(owords[lss]);
            }
        }
        return sol;
    }
};
