/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int pivotInteger(int n)
    {
        vector<int> nums;
        vector<int> lsumsinc(n);
        vector<int> rsumsinc(n);

        int total = (n*(n+1)) / 2;

        for (int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }    

        lsumsinc[0] = nums[0]; 
        for (int i = 1; i < n; i++)
        {
            lsumsinc[i] = lsumsinc[i-1] + nums[i];
        }

        rsumsinc[0] = total;
        for (int i = 1; i < n; i++)
        {
            rsumsinc[i] = rsumsinc[i-1] - nums[i-1];
        }

        for (int i = 0; i < n; i++)
        {
            if (lsumsinc[i] == rsumsinc[i])
            {
                return i+1;
            }
        }

        return -1;
    }
};
