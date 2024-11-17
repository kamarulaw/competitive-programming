/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        // O(log n) time, O(1) space 
        int answer = INT_MAX;
        for (int elem = nums[0]; elem <= nums[nums.size()-1]; elem++)
        {
            int lo = 0;
            int hi = nums.size()-1;
            cout << lo << " " << hi;
            while (lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] == elem)
                {
                    if (mid - 1 >= 0 && nums[mid-1] == elem)
                    {
                        continue;
                    }
                    if (mid + 1 < nums.size() && nums[mid+1] == elem)
                    {
                        continue;
                    }
                    answer = nums[mid];
                    break;
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
        return answer;       
    }
};
