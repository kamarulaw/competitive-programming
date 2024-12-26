/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        if (num != 0)
        {
            return num % 10 != 0; 
        }
        else
        {
            return true;
        }   
    }
};
