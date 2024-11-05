/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        vector<int> inds;
        sort(nums.begin(),nums.end());
        int lo = 0;
        int hi = nums.size()-1; 
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
            {
                inds.push_back(mid);
                int midleft = mid - 1;
                int midright = mid + 1;
                while (midleft >= 0 && nums[midleft] == target)
                {
                    inds.push_back(midleft);
                    midleft = midleft - 1;
                }
                while (midright < nums.size() && nums[midright] == target)
                {
                    inds.push_back(midright);
                    midright = midright + 1;
                }
                sort(inds.begin(),inds.end());
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
        return inds;    
    }
};
