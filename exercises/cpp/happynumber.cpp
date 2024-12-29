/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool isHappy(int n) 
    {
        set<int> s;
        int sum = 0;
        while (n > 0)
        {
            sum += (n%10);
            n /= 10;
            if (sum == 1)
            {
                return true;
            }
            if (n == 0)
            {
                int ss = s.size(); 
                s.emplace(sum);
                if (ss == s.size())
                {
                    return false;
                }
                n = sum;
                sum = 0;
            }
        }   
        return false; // never gets here 
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    int sos(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += pow(n%10,2);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) 
    {
        while (sos(n) != 1)
        {
            n = sos(n);
            if (n == 2 || n == 4)
            {
                return false;
            }
            if (n == 1)
            {
                return true;
            }
        }
        return true;
    }
};
