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
