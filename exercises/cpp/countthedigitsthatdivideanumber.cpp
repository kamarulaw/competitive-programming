/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countDigits(int num) 
    {
        int sol = 0;
        int num_ = num;
        while (num_ > 0)
        {
            if (num % (num_ % 10) == 0)
            {
                sol++;
            }
            num_ /= 10;
        }   
        return sol; 
    }
};
