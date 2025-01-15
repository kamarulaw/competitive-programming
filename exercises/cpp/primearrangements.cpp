/* SOLUTION 1 */
/* psf */
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
        for (int i = 2; i < (int)pow(n,.5)+1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int numPrimeArrangements(int n) 
    {
        int primecount = 0;
        for (int i = 1; i <= n; i++)
        {
            if (isprime(i))
            {
                primecount++;
            }
        }
        unsigned long long int sol = 1;
        for (int i = 1; i <= primecount; i++)
        {
            sol *= (unsigned long long int)i;
        }
        return sol % (unsigned long long int)pow(10,9)+7;
    }
};

/* SOLUTION 2 */
/* All tests passed */
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

    int numPrimeArrangements(int n) 
    {
        // count number of prime numbers between
        // [1 2 3 4 5] [4 2 3 1 5] []
        int primecount = 0;
        for (int i = 2; i <= n; i++)
        {
            if (isprime(i))
            {
                primecount++;
            }
        }
        unsigned long long int compositecount = n - primecount;
        unsigned long long int sol = 1; 
        for (int i = 1; i <= compositecount; i++)
        {
            sol *= i;
            sol %= (unsigned long long int)pow(10,9) + 7;
            cout << sol << " ";
        }
        for (int i = 1; i <= primecount; i++)
        {
            sol *= i;
            sol %= (unsigned long long int)pow(10,9) + 7;
            cout << sol << " ";
        }
        return sol;
    }
};
