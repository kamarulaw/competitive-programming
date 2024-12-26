/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int numberOfMatches(int n) 
    {
        int teams = n;
        int matches = 0;
        while (teams > 1)
        {
            matches += (teams/2);
            if (teams % 2 == 0)
            {
                teams /= 2;
            }
            else 
            {
                teams += 1;
                teams /= 2;
            }
        }
        return matches;
    }
};
