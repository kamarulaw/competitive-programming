/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 11 of 21 */
/* expected output is incorrect */
/* nums = [1,2,3,4,5], target = 11, expected = 3, my answer = 0 */
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n = nums.size();
        int minsubarraysize = INT_MAX;
        for (int startindex = 0; startindex < n; startindex++)
        {
            int subarraysize = 0;
            int subarraysum = 0;
            int currindex = startindex;
            while (subarraysum < target && currindex < n)
            {
                subarraysum += nums[currindex];
                subarraysize += 1;
                currindex++;
            }

            if (subarraysum == target)
            {
                minsubarraysize = min(minsubarraysize, subarraysize);
            }
        }
        if (minsubarraysize == INT_MAX)
        {
            return 0;
        }
        return minsubarraysize;    
    }
};
