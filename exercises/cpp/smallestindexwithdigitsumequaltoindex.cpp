/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int sumOfDigits(int n)
    {
        int tot = 0;
        while (n > 0)
        {
            tot += (n%10);
            n /= 10;
        }
        return tot;
    }

    int smallestIndex(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (sumOfDigits(nums[i]) == i)
            {
                return i;
            }
        }
        return -1;
    }
};
