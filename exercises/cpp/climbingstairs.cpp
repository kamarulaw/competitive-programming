/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    // # of ways to write natural number n as a sum of 1s and 2s := Fib(n)
    int climbStairs(int n) 
    {
        if (n == 1 || n == 2)
        {
            if (n == 1)
            {
                return 1;
            }

            if (n == 2)
            {
                return 2;
            }
        }
        vector<int> dp(n);
        dp[0] = 1;
        dp[1] = 2;
        for (int i = 2; i < n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n-1];
    }
};

/* SOLUTION 2 */ 
/* All tests passed */
class Solution {
public:
    int climbStairs(int n) 
    {
        if (n == 1)
        {
            return 1; 
        }    
        vector<int> fib(n+1,0);
        fib[0] = 1;
        fib[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        } 
        return fib[n];
    }
};

