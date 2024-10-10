/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 130 of 212 */
class Solution {
public:
    int maxRepeating(string sequence, string word) 
    {
        int n = sequence.length();
        int wordlen = word.length();
        vector<int> dp(n,0);

        for (int index = wordlen; index < n; index++)
        {
            for (int preindex = 0; preindex < index; preindex++)
            {
                if (preindex + wordlen < n && preindex + wordlen < index && sequence.substr(preindex,wordlen).compare(word) == 0)
                {
                    dp[preindex+wordlen]++;
                }
            }
        }

        int MRS_ = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            MRS_ = max(MRS_, dp[i]);
        }

        return MRS_;
    }
};
