/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int m = text1.length();
        int n = text2.length();
        int dp[m+1][n+1];
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (text1[i-1] == text2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1]; 
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

        int LCS_ = INT_MIN;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                LCS_ = max(LCS_, dp[i][j]);
            }
        }

        return LCS_;
    }
};
