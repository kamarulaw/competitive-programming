/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    vector<int> rep(long long n)
    {
        vector<int> result;
        while (n > 0)
        {
            if (n%10 != 0)
            {
                result.push_back(n%10);
            }
            n/=10;
        }
        return result;
    }

    long long removeZeros(long long n) 
    {
        long long result = 0;
        vector<int> rep_ = rep(n);
        for (int i = 0; i < rep_.size(); i++)
        {
            result += ((rep_[i])*pow(10,i));
        }
        return result;
    }
};
