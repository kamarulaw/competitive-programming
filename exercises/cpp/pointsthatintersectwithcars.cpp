/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) 
    {
        int min_ = INT_MAX;
        int max_ = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            min_ = min(min_, nums[1][0]);
            max_ = max(max_, nums[i][1]);
        }    
        vector<bool> visited(max_,false);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int point = nums[i][0]; point <= nums[i][1]; point++)
            {
                visited[point-1] = true; 
            }
        }
        int sol = 0;
        for (int i = 0; i < visited.size(); i++)
        {
            if (visited[i])
            {
                sol++;
            }
        }
        return sol;
    }
};
