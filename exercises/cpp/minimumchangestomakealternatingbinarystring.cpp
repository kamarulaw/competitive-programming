/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minOperations(string s) 
    {
        int changes = 0;
        int sol = INT_MAX;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && s[i] != '0')
            {
                changes++;
            }
            if (i % 2 == 1 && s[i] != '1')
            {
                changes++;
            }
        }    
        sol = min(changes,sol);
        changes = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && s[i] != '1')
            {
                changes++;
            }
            if (i % 2 == 1 && s[i] != '0')
            {
                changes++;
            }
        }
        sol = min(changes,sol);
        return sol;
    }
};
