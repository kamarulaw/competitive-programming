/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int lsum = 0;
        int rsum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            rsum += nums[i];
        }

        if (rsum == 0)
        {
            return 0;
        }

        cout << lsum << " <> " << rsum << endl;
        rsum -= nums[0];
        cout << lsum << " <> " << rsum << endl;

        for (int i = 1; i < nums.size()-1; i++)
        {
            lsum += nums[i-1];
            rsum -= nums[i-1];

            if (lsum == rsum)
            {
                return i;
            }
        }
        return -1;
    }
};

/* SOLUTION 2 */ 
/* All tests passed */
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int n = nums.size();
        
        vector<int> lsums(n); 
        vector<int> rsums(n); 
        
        int arrsum = 0;
        for (int i = 0; i < n; i++)
        {
            arrsum += nums[i];
        }
        
        lsums[0] = 0; 
        for (int i = 1; i < n; i++)
        {
            lsums[i] = nums[i-1] + lsums[i-1];
        }

        rsums[0] = arrsum - nums[0];
        for (int i = 1; i < n; i++)
        {
            rsums[i] = rsums[i-1] - nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (lsums[i] == rsums[i])
            {
                return i;
            }
        }
        return -1;
    }
};
