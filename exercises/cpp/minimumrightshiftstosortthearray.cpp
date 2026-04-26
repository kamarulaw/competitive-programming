/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:

    bool isSorted(vector<int> v)
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

    int minimumRightShifts(vector<int>& nums) 
    {
        vector<int> v = nums;
        int n = nums.size();
        int iters = 0;
        int count = 1;
        while (count <= 2*n)
        {
            v.clear();
            for (int i = n-1; i < 2*n-1; i++)
            {
                v.push_back(nums[(i+count)%n]);
            }
            count++;
            if (isSorted(v))
            {
                return (n-iters)%n; 
            }
            iters++;
        }
        return -1;
    }
};
