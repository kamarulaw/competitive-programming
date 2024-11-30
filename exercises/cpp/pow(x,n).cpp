/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 302 of 306 */
class Solution {
public:
    double myPow(double x, int n) 
    {
        if (n == 1)
        {
            return x;
        }    
        if (n == 0)
        {
            return 1;
        }
        double ans = 1.0;
        for (long long i = 1; i <= abs(n); i++)
        {
            ans *= x;
        }
        if (n < 0)
        {
            return 1.0 / ans;
        }
        return ans;
    }
};
