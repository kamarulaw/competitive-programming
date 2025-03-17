/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    bool increasing(vector<int> arr, int k)
    {
        for (int i = 1; i < k; i++)
        {
            if (arr[i]<=arr[i-1])
            {
                return false;
            }
        }
        for (int i = k+1; i < 2*k; i++)
        {
            if (arr[i]<=arr[i-1])
            {
                return false;
            }
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) 
    {
        int n = nums.size();
        for (int i = 0; i <= n-2*k; i++)
        {
            vector<int> subarr(nums.begin()+i,nums.begin()+i+2*k);
            if (increasing(subarr,k))
            {
                return true;
            }
        }    
        return false;
    }
};
