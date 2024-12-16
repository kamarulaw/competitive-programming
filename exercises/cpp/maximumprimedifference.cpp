/* SOLUTION 1 */
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

    int maximumPrimeDifference(vector<int>& nums) 
    {
        vector<int> _i;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isprime(nums[i]))
            {
                _i.push_back(i);
            }
        } 
        if (_i.size() == 1)
        {
            return 0;
        }
        else 
        {
            return _i[_i.size()-1] - _i[0];
        }
    }
};
