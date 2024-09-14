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
