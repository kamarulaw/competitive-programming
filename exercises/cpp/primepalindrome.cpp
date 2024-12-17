/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 51 of 61 */
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

    bool ispalindrome(int n) 
    {
        string a = to_string(n);
        string b = a; reverse(b.begin(), b.end());
        return a.compare(b) == 0;
    }

    int primePalindrome(int n) 
    {
        bool found = false;
        int guess = n;
        while (found == false)
        {
            if (isprime(guess) && ispalindrome(guess))
            {
                found = true;
            }
            guess++;
        }
        return guess-1;
    }
};
