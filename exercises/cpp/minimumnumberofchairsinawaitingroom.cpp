/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumChairs(string s) 
    {
        int maxe = 0;
        int nume = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'E')
            {
                nume++;
            }
            maxe = max(maxe,nume);
            if(s[i] == 'L')
            {
                nume--;
            }
        }    
        return maxe;
    }
};
