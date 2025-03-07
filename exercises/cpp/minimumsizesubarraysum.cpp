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

/* SOLUTION 2 */
/* MEMORY LIMIT EXCEEDED ON CASE 18 of 21 */

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int sol = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                int csum;
                vector<int> arr(nums.begin()+i,nums.begin()+i+j);
                for (int k = 0; k < j; k++)
                {
                    if (k==0)
                    {
                        csum = arr[k];
                    }
                    else
                    {
                        csum += arr[k];
                    }
                }
                if (csum>=target)
                {
                    sol = min(sol,(int)arr.size());
                }
            }
        }    
        if (sol==INT_MAX)
        {
            return 0;
        }
        else
        {
            return sol;
        }
    }
};
