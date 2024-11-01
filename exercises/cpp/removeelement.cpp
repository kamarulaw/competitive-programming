/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int k = 0;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            if (nums[i] == val)
            {
                k++;
                nums.erase(nums.begin() + i);
            }
        }
        return k;
    }
};
