/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        // O(log n) time, O(1) space 
        int lo = 0; 
        int hi = nums.size()-1;
        int first = nums[lo];
        int last = nums[hi];
        for (int elem = first; elem <= last; elem++)
        {
            while (lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] == elem)
                {
                    if (mid - 1 >= 0 && nums[mid-1] == elem)
                    {
                        continue;
                    }
                    if (mid + 1 < nums.size && nums[mid+1] == elem)
                    {
                        continue;
                    }
                    return nums[mid];
                }
                else if (nums[mid] < elem)
                {
                    lo = mid + 1;
                }
                else
                {
                    hi = mid - 1;
                }
            }
        }    
    }
};
