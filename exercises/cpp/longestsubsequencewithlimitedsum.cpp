/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        int n = nums.size(); 
        int m = queries.size();
        vector<int> answer(m,0);
        sort(nums.begin(),nums.end());
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            int numsind = 0;
            while (numsind < n)
            {
                if (sum < queries[i])
                {
                    sum += nums[numsind];
                    numsind++;
                    answer[i] = numsind;
                }
                if (sum == queries[i])
                {
                    answer[i] = numsind;
                    break;
                }
                if (sum > queries[i])
                {
                    answer[i] = numsind - 1;
                    break;
                }
                
                if (sum < queries[i] && numsind == n-1)
                {
                    answer[i] = n;
                }
            }
        }
        return answer;
    }
};
