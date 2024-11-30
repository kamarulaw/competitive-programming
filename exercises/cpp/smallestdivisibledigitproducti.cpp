/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int product(int num)
    {
        int prod = 1;
        while (num > 0)
        {
            prod *= (num % 10); num /= 10;
        }
        return prod;
    }

    int smallestNumber(int n, int t) 
    {
        while (product(n) % t != 0)
        {
            n++;
        }
        return n;
    }
};
