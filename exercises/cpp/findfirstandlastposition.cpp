/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ans;
        int lo = 0; 
        int hi = nums.size()-1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo)/2; 
            if (nums[mid] == target)
            {
                int midl = mid;
                int midh = mid;
                while (midl-1 >= 0 && nums[midl-1] == target) 
                {
                    midl = midl-1; 
                }
                ans.push_back(midl);

                while (midh+1 < nums.size() && nums[midh+1] == target)
                {
                    midh = midh + 1; 
                }
                ans.push_back(midh);
                break;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1; 
            }
            else 
            {
                hi = mid - 1;
            }
        }
        
        if (ans.size() == 0)
        {
            return {-1,-1};
        }
        return ans; 
    }
};
// 
