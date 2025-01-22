/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    static bool comp(vector<int> pt1, vector<int> pt2)
    {
        return pt1[0] <= pt2[0];
    }

    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        int ans = 0;
        int n = points.size();
        sort(points.begin(),points.end(),comp);
        for (int i = 1; i < n; i++)
        {
            if (points[i][0] != points[i-1][0])
            {
                ans = max(ans,abs(points[i][0]-points[i-1][0]));
            }
        }
        return ans;
    }
};
