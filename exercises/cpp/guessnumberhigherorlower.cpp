/* SOLUTION 1 */
/* All tests passed */
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        bool found = false;

        while (found == false)
        {
            if (guess(n) == 0)
            {
                found = true;
            }
            else if (guess(n) == -1)
            {
                n /= 2;
            }
            else  
            {
                n += 1 ;
            }
        }
        return n;
    }
};
