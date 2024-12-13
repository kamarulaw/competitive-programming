/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isGood(vector<int>& nums) 
    {
        int n = nums.size();
        if (nums.size() == 1)
        {
            return false;
        }
        if (nums.size() == 2)
        {
            return nums[0] == 1 && nums[1] == 1;
        }
        sort(nums.begin(), nums.end());    
        vector<int> basen(n,0);
        basen[n-1] = n-1;
        basen[n-2] = n-1;

        for (int i = 0; i < n-2; i++)
        {
            basen[i] = i+1; 
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != basen[i])
            {
                return false;
            }
        }
        return true;
    }
};
