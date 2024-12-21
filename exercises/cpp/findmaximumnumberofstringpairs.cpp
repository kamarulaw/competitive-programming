/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool ispalindrome(string s)
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length()-i-1])
            {
                return false;
            }
        }
        return true;
    }

    int maximumNumberOfStringPairs(vector<string>& words) 
    {
        int sol = 0;
        map<string,int> m1;
        map<string,string> m0;
        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            string rvrs = words[i]; reverse(rvrs.begin(),rvrs.end());
            m0[word] = rvrs;
            m1[word]++;
        }    
        for (int i = 0; i < words.size(); i++)
        {
            if (ispalindrome(words[i]) == false && m1[m0[words[i]]] == 1 && m1[words[i]] == 1)
            {
                sol++;
                m1[words[i]]--;
                m1[m0[words[i]]]--;
            }
        }
        return sol;
    }
};
