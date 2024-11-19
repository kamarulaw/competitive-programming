/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        int n = nums.size();
        int counter = 0;
        map<int,vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                m[counter].push_back(nums[i]);
            }
            else 
            {
                if (nums[i] == nums[i-1] + 1)
                {
                    m[counter].push_back(nums[i]);
                }
                else
                {
                    counter++;
                    m[counter].push_back(nums[i]);
                }
            }
        }
        vector<string> answer;
        for (int j = 0; j <= counter; j++)
        {
            if (m[j].size() == 1)
            {
                answer.push_back(to_string(m[j][0]));
            }
            else if (m[j].size() > 1)
            {
                string subanswer = "";
                subanswer += to_string(m[j][0]);
                subanswer += "->";
                subanswer += to_string(m[j][m[j].size()-1]);
                answer.push_back(subanswer);
            }
        }
        return answer;    
    }
};
