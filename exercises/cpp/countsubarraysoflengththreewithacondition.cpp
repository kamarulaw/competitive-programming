/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    bool condsat(vector<int> arr)
    {
        return 2*arr[0]+2*arr[2] == arr[1];
    }

    int countSubarrays(vector<int>& nums) 
    {
        int sol = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (i+3>n)
            {
                break;
            }
            else
            {
                vector<int> arr(nums.begin()+i,nums.begin()+i+3);
                if (condsat(arr))
                {
                    sol++;
                }
            }
        } 
        return sol;   
    }
};
