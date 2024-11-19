/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 22 of 35 */
class Solution {
public:
    bool increasing(vector<int> nums_)
    {
        if (nums_.size() == 1)
        {
            return true;
        }
        for (int i = 0; i < nums_.size()-1; i++)
        {
            if (nums_[i] >= nums_[i+1])
            {
                return false;
            }
        }
        return true;
    }

    int findLengthOfLCIS(vector<int>& nums) 
    {
        int n = nums.size();
        int longest = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                vector<int> subarr(nums.begin()+i, nums.begin()+i+j);
                if (increasing(subarr))
                {
                    if (subarr.size() > longest)
                    {
                        longest = subarr.size();
                    }
                }
            }
        }
        return longest;    
    }
};
