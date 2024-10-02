/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) 
    {
        vector<bool> nums(51);

        for (int i = 0; i < ranges.size(); i++)
        {
            for (int j = ranges[i][0]; j <= ranges[i][1]; j++)
            {
                nums[j] = true;
            }
        }

        for (int i = left; i <= right; i++)
        {
            if (nums[i] == false)
            {
                return false;
            }
        }
        return true;
    }
};
