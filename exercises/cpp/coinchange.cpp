/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 15 of 189 */
class Solution {
public:
    vector<int> coins_;
    int fewestnumcoins = INT_MAX;
    void combinations(int numcoins, int amount)
    {
        if (amount == 0)
        {
            fewestnumcoins = min(fewestnumcoins, numcoins);
            return;
        }
        else if (amount < 0)
        {
            return;
        }
        else 
        {
            for (int i = 0; i < coins_.size(); i++)
            {
                combinations(numcoins+1, amount - coins_[i]);
            }
        }
    }

    int coinChange(vector<int>& coins, int amount) 
    {
        coins_ = coins;
        combinations(0,amount);
        if (fewestnumcoins == INT_MAX)
        {
            return -1;
        }    
        else
        {
            return fewestnumcoins;
        }
    }
};

/* SOLUTION 2 */ 
/* psf */
class Solution {
public:
    vector<int> coins_;
    vector<int> sol;
    int fewestnumcoins = INT_MAX;
    
    void coinchangeutil(int numcoins, int amount, bool startflag)
    {
        if (startflag == true)
        {
            sol.clear();
        }
        startflag = false;

        if (amount == 0)
        {
            sol.push_back(numcoins);
            return;
        }
        else if (amount < 0)
        {
            return;
        }
        else 
        {
            for (int i = 0; i < coins_.size(); i++)
            {
                coinchangeutil(numcoins+1, amount - coins_[i], false);
            }
        }
    }

    int coinChange(vector<int>& coins, int amount) 
    {
        int n = coins.size();
        coins_ = coins;
        sort(coins_.begin(), coins_.end());
        reverse(coins_.begin(), coins_.end());
        vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (dp[i-j] != INT_MAX)
                {
                    coinchangeutil(dp[i-j],amount-i+j,true);
                    if (sol.size() > 0)
                    {
                        dp[i-j] = sol[0];
                    }
                }
            }
        }
        return dp[n];
    }
};
