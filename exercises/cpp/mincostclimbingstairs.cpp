/* SOLUTION 1 */ 
/* 2/5/24 */ 
/* WRONG ANSWER ON CASE 131 of 284 */
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int dp[n+1]; 
        memset(dp, 0, sizeof(dp));
        dp[1] = cost[0]; dp[2] = cost[1];
        for (int i = 3; i <= n; i++){ 
            if (i == n) {
                dp[i] = min(dp[i-2], dp[i-1]); 
            } else {
                dp[i] = min(dp[i-2], dp[i-1]) + cost[i];
            }
        }  
        return dp[n-1]; 
    }
};

/* SOLUTION 2 */
/* 9/24/24 */
/* All tests passed */ 
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    { 
        vector<int> dp(cost.size());

        for (int i = 0; i < cost.size(); i++)
        {
            dp[i] = 0;
        }
        dp[0] = cost[0]; 
        dp[1] = cost[1]; 

        for (int i = 2; i < cost.size(); i++)
        {
            dp[i] = min(dp[i-1],dp[i-2]) + cost[i];
        }

        return min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};
