/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) 
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            // assume start is i
            // remove contiguous subarrary [nums[i]], [nums[i],nums[i+1]], [nums[i],nums[i+1],nums[i+2]]
            // check if the array left is strcitly increasing
            for (int j = i; j < n; j++)
            {
                if (strictincsubarr(nums,i,j))
                {
                    ans++;
                }
            }
        }
        return ans+1;    
    }

    bool strictincsubarr(vector<int> arr, int substart, int subend)
    {
        int i = 0;
        int j = subend+1;
        int n = arr.size();
        vector<int> subarr;
        while (i < substart)
        {
            subarr.push_back(arr[i]);
            i++;
        }
        while(j < n)
        {
            subarr.push_back(arr[j]);
            j++;
        }
        if (subarr.size() == 0)
        {
            return false;
        }

        for (int k = 0; k < subarr.size()-1; k++)
        {
            if (subarr[k] >= subarr[k+1])
            {
                return false;
            }
        }
        return true;
    }
};
