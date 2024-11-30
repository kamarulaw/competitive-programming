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
        for (int i = 2; i <= (int)pow(n,.5)+1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool isUgly(int n) 
    {
        long long n_ = abs((long long)n);
        map<long long,long long> m; m[2] = 1; m[3] = 1; m[5] = 1;
        for (long long i = 2; i < n_; i++)
        {
            if (i > n_)
            {
                break;
            }
            while (n_ % i == 0 && isprime(i))
            {
                m[i]++;
                n_ /= i;
            }
        } 
        cout << m.size() << endl; 
        return m.size() == 3;
    }
};
