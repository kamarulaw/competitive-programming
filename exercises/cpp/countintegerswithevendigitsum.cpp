/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countEven(int num) 
    {
        int ans = 0;
        for (int i = 2; i <= num; i++)
        {
            int n = i;
            int digitsum = 0;
            while (n > 0)
            {
                digitsum += (n % 10); n /= 10;
            }
            if (digitsum % 2 == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
