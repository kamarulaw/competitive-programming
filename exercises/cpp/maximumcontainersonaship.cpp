/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) 
    {
        if (n*n*w <= maxWeight)
        {
            return n*n;
        }    
        else 
        {
            int sol = n*n;
            while (sol*w > maxWeight)
            {
                sol--;
            }
            return sol;
        }
    }
};
