/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    bool isSorted(vector<int> nums)
    {
        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i] > nums[i+1])
            {
                return false;
            }
        }
        return true;
    }

    bool check(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> v = nums;
        if (isSorted(v))
        {
            return true;
        }
        int count = 1;
        while (count <= 2*n)
        {
            v.clear();
            for (int i = n-1; i < 2*n-1; i++)
            {
                v.push_back(nums[(i+count+1)%n]);
            }
            count++;
            if (isSorted(v))
            {
                return true;
            }
        }
        return false;
    }
};
