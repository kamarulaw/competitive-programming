/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    bool isprime(int x)
    {
        if (x == 2)
        {
            return true;
        }
        if (x < 2 || x % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= (int)pow(x,.5)+1; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    
    bool checkPrimeFrequency(vector<int>& nums) 
    {
        map<int,int> freqs;
        for (int i = 0; i < nums.size(); i++)
        {
            freqs[nums[i]]++;
        }  
        for (auto it: freqs)
        {
            if (isprime(it.second))
            {
                return true;
            }
        }
        return false;
    }
};
