/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 80 of 83 */
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        int numneg = 0;
        int n = nums.size();
        int lastnegindex = INT_MIN;
        int lastzeroindex = INT_MIN;
        bool containszero = false;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                containszero = true;
                lastzeroindex = i;
            }
            if (nums[i] < 0)
            {
                numneg++;
                lastnegindex = i;
            }
        }
        if (numneg < k)
        {
            int kk = 0;
            if (lastnegindex != INT_MIN)
            {
                for (int i = lastnegindex; i >= 0; i--)
                {
                    nums[i] *= -1; kk++;
                }
            }
            if (containszero)
            {
                while (kk < k)
                {
                    nums[lastzeroindex] *= -1; kk++; 
                }
            }
            else
            {
                while (kk < k)
                {
                    if (lastnegindex == INT_MIN)
                    {
                        nums[0] *= -1; kk++; 
                    }
                    else
                    {
                        nums[lastnegindex] *= -1; kk++;
                    }
                }
            }
        }
        else if (numneg == k)
        {
            for (int i = lastnegindex; i >= 0; i--)
            {
                nums[i] *= -1; 
            }
        }
        else // numneg > k
        {
            for (int i = 0; i < k; i++)
            {
                nums[i] *= -1;
            }
        }
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            sol += nums[i];
        }
        return sol;
    }
};
