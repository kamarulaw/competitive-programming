/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 106 of 160 */
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) 
    {
        int index_sol = 0;
        int value_sol = 0;
        int sol = INT_MAX;
        for (int i = 0; i < divisors.size(); i++)
        {
            int index_csol = 0;
            int value_csol = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j]%divisors[i]==0)
                {
                    index_csol = i;
                    value_csol++;
                }
            }
            if (index_csol != -1 && value_csol >= value_sol)
            {
                if (value_csol==value_sol)
                {
                    sol = min(divisors[index_csol],divisors[index_sol]);
                    if (divisors[index_csol] == sol)
                    {
                        index_sol = index_csol;
                    }
                }
                else 
                {
                    index_sol = index_csol;
                    value_sol = value_csol;
                    sol = divisors[index_sol];
                }
            }
        } 
        if (sol != INT_MAX)
        {
            return sol;
        }
        else
        {
            return divisors[index_sol];
        }
    }
};
