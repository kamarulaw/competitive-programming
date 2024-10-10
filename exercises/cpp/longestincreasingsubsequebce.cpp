/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size();

        vector<int> LIS;
        
        for (int i = 0; i < n; i++)
        {
            LIS.push_back(1);
        }      

        for (int index = 1; index < n; index++)
        {
            for (int pre_index = 0; pre_index < index; pre_index++)
            {
                if (nums[index] > nums[pre_index] && LIS[index] < 1 + LIS[pre_index])
                {
                    LIS[index] = 1 + LIS[pre_index];
                }
            }
        }

        int LIS_ = INT_MIN;
        for (int i = 0; i < LIS.size(); i++)
        {
            LIS_ = max(LIS_, LIS[i]);
        }

        return LIS_;
    }
};
