/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) 
    {
        int sum = 0; 
        int num = x; 
        while (num > 0)
        {
            sum += (num % 10);
            num /= 10;
        }
        if (x % sum == 0)
        {
            return sum;
        }
        else 
        {
            return -1;
        }
    }
};
