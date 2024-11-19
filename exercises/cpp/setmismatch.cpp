/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size();
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            m[i+1] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        vector<int> answer;
        for (auto it: m)
        {
            if (it.second == 0 || it.second == 2)
            {
                answer.push_back(it.first);
            }
        }
        sort(answer.begin(), answer.end());
        if (m[answer[0]] == 0 && 1 <= answer[0] && answer[0] <= n)
        {
            reverse(answer.begin(), answer.end());
        }
        return answer;    
    }
};
