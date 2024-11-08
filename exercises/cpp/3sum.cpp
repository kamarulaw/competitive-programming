/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 308 of 313 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n = nums.size();
        map<int,int> m;
        set<vector<int>> answer;
        for(int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    m[nums[i]]--;
                    m[nums[j]]--;
                    if (m[0-nums[i]-nums[j]] >= 1)
                    {
                        vector<int> ss = {nums[i],nums[j],0-nums[i]-nums[j]};
                        sort(ss.begin(),ss.end()); 
                        answer.emplace(ss);
                    }
                    m[nums[i]]++; 
                    m[nums[j]]++;
                }
            }
        }
        vector<vector<int>> vanswer(answer.begin(),answer.end()); 
        return vanswer;    
    }
};
