/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int sol = 0;
        int slen = s.length();
        int n = words.size();
        map<string,int> m;
        for (int i = 0; i < n; i++)   
        {
            string word = words[i];
            int wlen = word.length();
            int ii = 0;
            int jj = 0;
            if (m[word] > 0 )
            {
                sol++;
            }
            else
            {
                while (jj < slen && ii < wlen)
                {
                    if (s[jj] == word[ii])
                    {
                        ii++;
                        jj++;
                    }
                    else
                    {
                        jj++;
                    }
                    if (ii == wlen)
                    {
                        sol++;
                        m[word] = 1;
                    }
                }
            }
        } 
        return sol;
    }
};
