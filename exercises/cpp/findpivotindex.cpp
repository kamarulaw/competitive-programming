/* SOLUTION 1 */ 
/* WRONG ANSWER ON PRE-TEST 1 */ 
/* CORRECT ANSWER ON PRE-TESTs 2, 3 */ 
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum = 0;
        int lsum = 0;

        vector<int> cumulativesums;
        
        for (int i = 0; i < nums.size();i++)
        {
            rsum += nums[i]; 
            cumulativesums.push_back(rsum);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                rsum -= nums[i];
            }
            else if (i == nums.size()-1)
            {
                lsum += nums[i];
            }
            else
            {
                rsum -= nums[i]; 
                lsum += nums[i];
            }

            if (rsum == lsum)
            {
                return i;
            }
        }
        return -1; 
    }
};

/* SOLUTION 2 */ 
/* ALl tests passed  */
class Solution {
public:
    int pivotIndex(vector<int>& nums) 
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
