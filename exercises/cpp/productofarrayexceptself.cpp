/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        vector<int> answer;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                prefix[i] = 1;
            }
            else 
            {
                prefix[i] = prefix[i-1]*nums[i-1];
            }
        }
        for (int i = n-1; i >= 0; i--)
        {
            if (i == n-1)
            {
                suffix[i] = 1;
            }
            else
            {
                suffix[i] = suffix[i+1] * nums[i+1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            answer.push_back(prefix[i]*suffix[i]);
        }
        return answer;
    }
};
