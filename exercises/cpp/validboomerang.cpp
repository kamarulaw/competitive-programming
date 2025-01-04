/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) 
    {
        if (points[0][0] == points[1][0] && points[1][0] == points[2][0] || points[0][1] == points[1][1] && points[1][1] == points[2][1])
        {
            return false;
        }    
        int n = points.size();
        set<double> slopes;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                slopes.emplace((double)(points[i][1] - points[j][1]) / (double)(points[i][0] - points[j][0]));
            }
        }
        return slopes.size() > 1;
    }
};
