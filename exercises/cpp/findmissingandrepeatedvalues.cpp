/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        map<int,int> m;
        for (int i = 1; i <= grid.size()*grid.size(); i++)
        {
            m[i] = 0;
        }    
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                m[grid[i][j]]++;
            }
        }
        bool flipneeded = false; vector<int> sol;
        for (auto it : m)
        {
            if (it.second == 0)
            {
                sol.push_back(it.first);
                if (sol.size() == 1)
                {
                    flipneeded = true;
                }
            }
            if (it.second == 2)
            {
                sol.push_back(it.first);
            }
        }
        if (flipneeded == true)
        {
            int tmp = sol[1];
            sol[1] = sol[0];
            sol[0] = tmp;
        }
        return sol;
    }
};
