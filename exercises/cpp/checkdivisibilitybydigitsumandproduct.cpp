/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int dsum(int n)
    {
        int ans = 0;
        while (n > 0)
        {
            ans += (n%10); n/=10;
        }
        return ans;
    }

    int dpro(int n)
    {
        int ans = 1;
        while (n > 0)
        {
            ans *= (n%10); n/=10;
        }
        return ans;
    }

    bool checkDivisibility(int n) 
    {
        if (n%(dsum(n)+dpro(n))==0)
        {
            return true;
        }     
        else 
        {
            return false;
        }
    }
};
