/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countOdds(int low, int high) 
    {
        int ans = 0;
        for (int num = low; num <= high; num++)
        {
            if (num % 2 == 1)
            {
                ans++;
            }
        }   
        return ans; 
    }
};

/* SOLUTION 2 */
/* psf */
class Solution {
public:
    int countOdds(int low, int high) 
    {
        if ((low % 2 == 0 && high % 2 == 0) || (low % 2 == 1 && high % 2 == 1))
        {
            return (high - low) / 2;
        }
        
        if ((low % 2 == 0 && high % 2 == 1) || (low % 2 == 1 && high % 2 == 0))
        {
            return ceil((high - low) / 2);
        }
    }
};
