/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 73 of 171 */
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int min_ = INT_MAX;
        int max_ = INT_MIN;
        for (int i = 0; i < intervals.size(); i++)
        {
            min_ = min(min_, intervals[i][0]);
            max_ = max(max_, intervals[i][1]);
        }    
        vector<bool> visited(max_+1,false);
        for (int i = 0; i < intervals.size(); i++)
        {
            for (int point_index = intervals[i][0]; point_index <= intervals[i][1]; point_index++)
            {
                visited[point_index] = true; 
            }
        } 
        int consecs = 1;
        int start;
        int end;
        bool startfound = false;
        set<vector<int>> sol;
        for (int i = 1; i < visited.size(); i++)
        {
            if (visited[i] == visited[i-1] && visited[i-1] == true)
            {
                consecs++;
                if (startfound == false)
                {
                    start = i-1;
                    startfound = true;
                }
                end = i;
            }
            else 
            {
                consecs = 1;
                sol.insert({start,end});
                startfound = false;
            }
        }
        sol.insert({start,end});
        vector<vector<int>> vsol(sol.begin(), sol.end());
        for (int i = vsol.size()-1; i >= 0; i--)
        {
            if (vsol[i][0] > max_ || vsol[i][0] > max_ || vsol[i][0] < 0 || vsol[i][1] < 0)
            {
                vsol.erase(vsol.begin() + i);
            }   
        }
        return vsol;
    }
};
