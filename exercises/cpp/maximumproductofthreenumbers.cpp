/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int prod(vector<int> arr, int i, int j, int k)
    {
        return arr[i]*arr[j]*arr[k];
    }

    int maximumProduct(vector<int>& nums) 
    {    
        int n = nums.size();
        
        int numzeros = 0;

        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                numzeros++;
            }
        }

        if (n - numzeros < 3)
        {
            return 0;
        }
        
        return max(prod(nums,0,1,n-1), prod(nums,n-1,n-2,n-3));
    }
};
