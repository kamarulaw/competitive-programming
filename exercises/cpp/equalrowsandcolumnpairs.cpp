/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 28 of 80 */
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) 
    {
        int n = grid.size();

        map<string,int> m;
        
        for (int i = 0; i < n; i++)
        {
            string scrow = "";
            vector<int> crow = grid[i];
            for (int j = 0; j < n; j++)
            {
                scrow += to_string(crow[j]);
            }
            m[scrow]++;
        }

        for (int i = 0; i < n; i++) 
        {
            string sccol = "";
            
            vector<int> ccol;
            
            for (int j = 0; j < n; j++) 
            {
                ccol.push_back(grid[j][i]);
            }

            for (int j = 0; j < n; j++)
            {
                sccol += to_string(ccol[j]);
            }
            m[sccol]++;
        }

        int ercps = 0;
        for (auto elem: m)
        {
            if (elem.second > 1)
            {
                ercps += elem.second;
                ercps -= 1;
            }
        }
        return ercps;
    }
};
