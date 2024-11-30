/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int addDigitsUtil(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num%10;
            num /= 10;
        }
        return sum;
    }

    int addDigits(int num) 
    {
        while (num >= 10)
        {
            num = addDigitsUtil(num);
        }
        return num;
    }
};
