/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        if (trust.size() == 0 && n == 1)
        {
            return 1;
        }

        map<int, vector<int>> trust_restructured0;
        
        for (int i = 1; i <= n; i++)
        {
            trust_restructured0[i] = {};
        }

        map<int, int> trust_restructured1;
        for (int i = 0; i < trust.size(); i++)
        {
            trust_restructured0[trust[i][0]].push_back(trust[i][1]);
            trust_restructured1[trust[i][1]]++;
        }

        for (auto it: trust_restructured1)
        {
            if (it.second == n-1 && trust_restructured0[it.first].size() == 0)
            {
                return it.first;
            }
        }
        return -1;
    }
};
