/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        if (nums.size() == 1)
        {
            return true;
        }

        bool monoi = true;
        bool monod = true;
        for (int i = 0; i < nums.size()-1; i++)    
        {
            if (nums[i] > nums[i+1])
            {
                monoi = false;
            }

            if (nums[i] < nums[i+1])
            {
                monod = false;
            }

            if (monoi == false && monod == false)
            {
                return false;
            }
        }

        return monoi || monod; 
    }
};
