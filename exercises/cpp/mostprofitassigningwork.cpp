/* SOLUTION 1  */
/* WRONG ANSWER ON CASE 54 of 60 */
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) 
    {
        map<int,int> m;
        for (int i = 0; i < profit.size(); i++)
        {
            m[difficulty[i]] = profit[i];
        }
        int totalprofit = 0;
        for (int i = 0; i < worker.size(); i++)
        {
            int greatestdifficultylessthan = 0;
            for (int j = 0 ; j < difficulty.size(); j++)
            {
                if (worker[i] >= difficulty[j] && greatestdifficultylessthan <= difficulty[j])
                {
                    greatestdifficultylessthan = difficulty[j];
                }
            }
            totalprofit += m[greatestdifficultylessthan];
        }
        return totalprofit;
    }
};
