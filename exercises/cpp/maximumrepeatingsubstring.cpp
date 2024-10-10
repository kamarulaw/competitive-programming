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

/* SOLUTION 2 */ 
/* psf */
class Solution {
public:
    int maxRepeating(string sequence, string word) 
    {
        int n = sequence.length();
        int wordlen = word.length();
        vector<int> dp(n,0);

        if (n < wordlen)
        {
            return 0;
        }

        for (int index = 0; index < n; index++)
        {
            int postindex = 0;
            while (postindex + wordlen <= n)
            {
                if (sequence.substr(postindex,wordlen).compare(word) == 0)
                {
                    dp[postindex + wordlen] = 1 + dp[postindex];
                    postindex = postindex + wordlen;
                }
                else 
                {
                    break;
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
