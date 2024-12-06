/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int sol = 0;
        for (int i = 0; i < details.size(); i++)
        {
            reverse(details[i].begin(), details[i].end());
            string _age = details[i].substr(2,2);
            reverse(_age.begin(), _age.end());
            int age_ = stoi(_age);
            if (age_ > 60)
            {
                sol++;
            }
        }
        return sol;    
    }
};
