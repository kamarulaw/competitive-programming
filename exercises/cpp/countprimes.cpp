/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 20 of 66 */
class Solution {
public:
    bool isprime(int n)
    {
        if (n == 2)
        {
            return true;
        }
        if (n < 2 || n % 2 == 0)
        {
            return false;
        }
        for (int i = 2; i <= (int)pow(n,.5)+1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) 
    {
        int sol = 0;
        for (int i = 2; i < n; i++)
        {
            if (i != 2 && i % 2 == 0)
            {
                continue;
            }
            if (isprime(i))
            {
                sol++;
            }
        }    
        return sol;
    }
};
