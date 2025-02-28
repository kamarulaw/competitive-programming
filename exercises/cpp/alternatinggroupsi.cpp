/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) 
    {
        int n = colors.size();
        int sol = 0;
        if (colors[1]==colors[n-1] && colors[0]!=colors[1])
        {
            sol++;
        }    
        if (colors[0]==colors[n-2] && colors[n-1]!=colors[0])
        {
            sol++;
        }
        for (int i = 0; i<=n-3; i++)
        {
            if (colors[i]==colors[i+2] && colors[i+1]!=colors[i])
            {
                sol++;
            }
        }
        return sol;
    }
};
