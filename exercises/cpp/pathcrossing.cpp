/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isPathCrossing(string path) 
    {
        vector<int> xy  = {0,0};
        map<vector<int>,int> m; m[xy]++;
        for (int i = 0; i < path.length(); i++)    
        {
            if (path[i] == 'N')
            {
                xy[1]++;
            }
            else if (path[i] == 'E')
            {
                xy[0]++;
            }
            else if (path[i] == 'W')
            {
                xy[0]--;
            }
            else
            {
                xy[1]--;
            }
            m[xy]++;
            if (m[xy] > 1) 
            {
                return true;
            }
        }
        return false;
    }
};
