/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:

    bool condsat1(vector<int> arr)
    {
        if (arr.size()==1)
        {
            return true;
        }
        int n = arr.size();
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]<= arr[i+1])
            {
                return false;
            }
        }
        return true;
    }
    
    bool condsat2(vector<int> arr)
    {
        if (arr.size()==1)
        {
            return true;
        }
        int n = arr.size();
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]>=arr[i+1])
            {
                return false;
            }
        }
        return true;
    }
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int sol = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                vector<int> arr(nums.begin()+i,nums.begin()+i+j);
                if (condsat1(arr)||condsat2(arr))
                {
                    sol = max(sol,(int)arr.size());
                }
            }
        }
        return sol;
    }
};
