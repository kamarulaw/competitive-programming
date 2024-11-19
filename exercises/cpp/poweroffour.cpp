/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        while (n > 1)
        {
            if (n % 4 != 0)
            {
                return false;
            }
            n /= 4;
        }
        return n == 1;    
    }
};
// wasnt sure if four not being prime would change anything from poweroftwo.cpp and powerofthree.cpp off top
