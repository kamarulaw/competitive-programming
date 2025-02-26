/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    int countPartitions(vector<int>& nums) 
    {
        int sol = 0;
        int total = 0;
        int n = nums.size();
        vector<int> cumsumleft(n,0);
        for (int i = 0; i < n; i++)
        {
            total += nums[i];
        } 
        for (int i = 0; i < n; i++)
        {
            if (i==0)
            {
                cumsumleft[i] = nums[i];
            }
            else
            {
                cumsumleft[i] = nums[i] + cumsumleft[i-1];
            }
            if ((i!=n-1)&&(cumsumleft[i]%2==0&&total%2==0) || (cumsumleft[i]%2==1&&total%2==0)) 
            {
                sol++;
            }
        }
        return sol;
    }
};
