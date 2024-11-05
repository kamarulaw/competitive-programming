/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 18 of 20 */
/* expected output is incorrect */
/* intervals = [[1,1],[3,4]], output = [1,-1], expected = [0,-1] */
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();
        vector<int> ans(n,INT_MAX);
        for (int i = 0; i < intervals.size(); i++)
        {
            int minintervalstart = INT_MAX; 
            int intervalnumber = INT_MAX;
            for (int j = 0; j < intervals.size(); j++)
            {
                if (j == i)
                {
                    continue;
                }
                if (intervals[j][0] >= intervals[i][1] && intervals[j][0] < minintervalstart)
                {
                    minintervalstart = intervals[j][0];
                    intervalnumber = j;
                }
            }
            if (intervalnumber != INT_MAX)
            {
                ans[i] = intervalnumber;
            }
            else
            {
                ans[i] = -1;
            }
        }    
        return ans;
    }
};
