/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countHillValley(vector<int>& nums) 
    {
        int sol = 0;
        int ind = 0;
        int n = nums.size();
        while (ind < n)
        {
            int ind_ = ind;
            if (ind != 0 && ind != n-1)
            {
                while (ind_ < n && nums[ind] == nums[ind_])
                {
                    ind_++;
                }
                if (ind_ < n)
                {
                    if (nums[ind-1] > nums[ind] && nums[ind] < nums[ind_])
                    {
                        sol++;
                    }
                    else if (nums[ind-1] < nums[ind] && nums[ind] > nums[ind_])
                    {
                        sol++;
                    }
                }

            }
            if (ind == ind_)
            {
                ind++;
            }
            else 
            {
                ind = ind_;
            }
        }  
        return sol;  
    }
};
