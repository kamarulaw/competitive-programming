/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 102 of 103 */
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        if (nums.size() == 1)
        {
            return nums;
        }
        int n = nums.size();
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += nums[i];
        }
        sort(nums.begin(),nums.end());
        for (int k = 1; k <= n-1; k++)
        {
            int sstotal = 0;
            vector<int> subseq(nums.end()-k,nums.end());
            for (int i = 0; i < subseq.size(); i++)
            {
                sstotal += subseq[i];
            }
            if (sstotal > total - sstotal)
            {
                reverse(subseq.begin(), subseq.end());
                return subseq;
            }
        }
        return {};
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        if (nums.size() == 1)
        {
            return nums;
        }

        int n = nums.size();
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += nums[i];
        }
        sort(nums.begin(),nums.end());
        for (int k = 1; k <= n; k++)
        {
            int sstotal = 0;
            vector<int> subseq(nums.end()-k,nums.end());
            for (int i = 0; i < subseq.size(); i++)
            {
                sstotal += subseq[i];
            }
            if (sstotal > total - sstotal)
            {
                reverse(subseq.begin(), subseq.end());
                return subseq;
            }
        }
        return {};
    }
};
