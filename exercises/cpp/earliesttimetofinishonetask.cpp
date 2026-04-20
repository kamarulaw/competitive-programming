/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) 
    {
        vector<int> completion_times;
        for (int i = 0; i < tasks.size(); i++)
        {
            completion_times.push_back(tasks[i][1]+tasks[i][0]);
        }    
        sort(completion_times.begin(), completion_times.end());
        return completion_times[0];
    }
};
