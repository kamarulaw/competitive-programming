/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) 
    {
        int net = 0;
        int sol = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int curr = nums[i];
            if (curr > 0)
            {
                while (curr > 0)
                {
                    net++;
                    curr--;
                } 
                if (net == 0)
                {
                    sol++;
                }
            }
            else 
            {
                while (curr < 0)
                {
                    net--;
                    curr++;
                }
                if (net == 0)
                {
                    sol++;
                }
            }
        }    
        return sol;
    }
};
