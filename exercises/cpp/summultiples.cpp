/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int sumOfMultiples(int n) 
    {
        int sol = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0)
            {
                sol += i;
            }
            else if (i % 5 == 0)
            {
                sol += i;
            }
            else if (i % 7 == 0)
            {
                sol += i;
            }
        }    
        return sol;
    }
};
