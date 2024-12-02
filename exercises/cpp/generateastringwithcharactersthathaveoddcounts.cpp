/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string generateTheString(int n) 
    {
        string sol = "";
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n-1; i++)
            {
                sol += 'a';
            }
            sol += 'b';
        }
        else 
        {
            for (int i = 1; i <= n; i++)
            {
                sol += 'a';
            }
        }
        return sol;
    }
};
