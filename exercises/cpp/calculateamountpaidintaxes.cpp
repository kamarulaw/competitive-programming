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

/* SOLUTION 2 */
/* psf */

class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) 
    {
        int n = brackets.size();
        double result = 0.0;
        for (int i = 0; i < n; i++)
        {
            int amount_taxed = min(brackets[i][0],income-brackets[i][0]);
            cout << amount_taxed << " ";
            income = min(brackets[i][0],income-brackets[i][0]);
            if (i == 0)
            {
                result += amount_taxed*brackets[i][1];
            }
            else 
            {
                result += amount_taxed*(brackets[i][1]-brackets[i-1][1]);
            }

            if (income == 0)
            {
                break;
            }
        }  
        return result;
    }
};
