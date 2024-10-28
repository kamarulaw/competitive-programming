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
