/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        int n = nums.size();
        map<int,int> map_;
        for (int i = 0; i < n-1; i++)
        {
            map_[nums[i] + nums[i+1]]++;
            if (map_[nums[i] + nums[i+1]] > 1)
            {
                return true;
            }
        }    
        return false;
    }
};
