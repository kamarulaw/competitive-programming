/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) 
    {
        return (arrivalTime + delayedTime)%24;    
    }
};
