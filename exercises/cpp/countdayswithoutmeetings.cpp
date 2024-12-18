/* SOLUTION 1  */
/* TIME LIMIT EXCEEDED ON CASE 563 of 578 */
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) 
    {
        vector<bool> visited(days+1,false);
        for (int i = 0; i < meetings.size(); i++)
        {
            for (int day = meetings[i][0]; day <= meetings[i][1]; day++)
            {
                visited[day] = true;
            }
        }   
        int sol = 0; 
        for (int i = 1; i < visited.size(); i++)
        {
            if (visited[i] == false)
            {
                sol++;
            }
        }
        return sol;
    }
};
