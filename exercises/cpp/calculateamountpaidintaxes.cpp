/* SOLUTION 1 */
/* psf */
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) 
    {
        int n = brackets.size();
        vector<int> amounts;
        for (int i = 0; i < n; i++)
        {
            if (i==0)
            {
                amounts.push_back(brackets[i][0]);
            }
            else 
            {
                amounts.push_back(brackets[i][0]-brackets[i-1][0]);
            }
        }    
        int cumulative = 0;
        double taxes = 0.0;
        while (cumulative <= income)
        {
            
        }

    }
};
