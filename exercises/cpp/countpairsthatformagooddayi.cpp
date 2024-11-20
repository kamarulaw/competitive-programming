/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) 
    {
        int n = hours.size(); 
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && (hours[i]+hours[j])%24 == 0)
                {
                    sol++;
                }
            }
        }
        return sol/2;    
    }
};
