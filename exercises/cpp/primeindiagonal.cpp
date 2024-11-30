/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isprime(int num)
    {
        if (num == 2)
        {
            return true;
        }
        if (num < 2  || num % 2 == 0)
        {
            return false;
        }
        for (int i = 2; i <= (int)pow(num,.5)+1; i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) 
    {
        int sol = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isprime(nums[i][i]))
            {
                sol = max(nums[i][i],sol);
            }
            if (isprime(nums[i][nums.size()-1-i]))
            {
                sol = max(nums[i][nums.size()-1-i],sol);
            }
        }
        return sol; 
    }
};
