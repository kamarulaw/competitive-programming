/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int n = nums.size();
        int lsa = 0;
        for (int i = 0; i < n; i++)
        {
            int i_ = i;
            int k = 1;
            int csa = 0;
            if (lsa > n - i + 1)
            {
                break;
            }
            
            while (i_ < n)
            {
                if (nums[i_] == 0 && k > 0)
                {
                    k--; 
                    i_++; 
                }
                else if (nums[i_] == 1)
                {
                    i_++; 
                    csa++;
                }
                else 
                {
                    break;
                }
            }
            if (k == 1)
            {
                lsa = max(lsa, csa-1);
            }
            else
            {
                lsa = max(lsa, csa);
            }
        }
        return lsa;
    }
};
