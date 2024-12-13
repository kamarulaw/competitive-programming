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
