/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maximumValue(vector<string>& strs) 
    {
        int sol = INT_MIN; 
        for (int i = 0; i < strs.size(); i++)
        {
            bool ods = true;
            for (int j = 0; j < strs[i].length(); j++)
            {
                if ((int)'0' > (int)strs[i][j] || (int)strs[i][j] > (int)'9')
                {
                    ods = false;
                }
            }
            if (ods == true)
            {
                sol = max(sol, stoi(strs[i]));
            }
            else
            {
                sol = max(sol, (int)strs[i].length());
            }
        }    
        return sol;
    }
};
