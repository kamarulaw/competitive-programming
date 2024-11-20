/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 17 of 19 */
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) 
    {
        int numequivalent = 0;
        for (int i = 0; i < dominoes.size(); i++)
        {
            vector<int> idom = dominoes[i];
            for (int j = 0; j < dominoes.size(); j++)
            {
                if (i < j)
                {
                    vector<int> jdom = dominoes[j];
                    if ((idom[0] == jdom[0] && idom[1] == jdom[1]) || 
                        (idom[0] == jdom[1] && idom[1] == jdom[0]))
                    {
                        numequivalent++;
                    }
                }
            }
        }
        return numequivalent;    
    }
};
