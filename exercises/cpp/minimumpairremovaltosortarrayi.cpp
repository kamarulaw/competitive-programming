/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:

    bool isNonDecreasing(vector<int> v)
    {
        for (int i = 0; i < v.size()-1; i++)
        {
            if (v[i] > v[i+1])
            {
                return false;
            }
        }
        return true;
    }

    // albert gu (you left, me center, pjz right) v. zhuo qun song (plugged by yazeed)
    int minimumPairRemoval(vector<int>& nums) 
    {
        int iters = 0;
        vector<int> v;
        int left = INT_MAX;
        int right = INT_MAX;
        int n = nums.size();
        int minsum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            v.push_back(nums[i]);
        }   
        while(!isNonDecreasing(v))
        {
            iters++;
            n = v.size();
            for (int i = 0; i < v.size()-1; i++)
            {
                if (v[i]+v[i+1] < minsum)
                {
                    left = i;
                    right = i+1;
                    minsum = v[i] + v[i+1];
                }
            }
            vector<int> v_;
            for (int i = 0; i < left; i++)
            {
                v_.push_back(v[i]);
            }
            v_.push_back(minsum);
            for (int i = right+1; i < n; i++)
            {
                v_.push_back(v[i]);
            }
            v = v_;
            minsum = INT_MAX;
        }
        return iters;
    }
};
