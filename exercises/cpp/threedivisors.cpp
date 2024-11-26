/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isThree(int n) 
    {
        if (n < 2)
        {
            return false;
        }    
        int dc = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                dc++;
            }
        }
        return dc == 3;
    }
};
