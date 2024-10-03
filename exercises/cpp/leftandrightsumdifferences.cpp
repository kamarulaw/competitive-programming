/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        int n = nums.size();

        vector<int> lsums(n); 
        vector<int> rsums(n);  
        vector<int> answer(n);

        lsums[0] = 0;
        for (int i = 1; i < n; i++)
        {
            lsums[i] = lsums[i-1] + nums[i-1];
        }

        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += nums[i];
        }

        rsums[0] = total - nums[0];
        answer[0] = abs(rsums[0] - lsums[0]); 
        for (int i = 1; i < n; i++)
        {
            rsums[i] = rsums[i-1] - nums[i];
            answer[i] = abs(rsums[i] - lsums[i]);
        }
        return answer; 
    }
};
