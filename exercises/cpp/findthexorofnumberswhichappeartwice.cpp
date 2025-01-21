/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) 
    {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        bool firstfound = false;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i-1])
            {
                if (!(firstfound))
                {
                    ans = nums[i];
                    firstfound = true;
                }
                else
                {
                    ans ^= nums[i];
                }
            }
        }
        return ans;
    }
};
