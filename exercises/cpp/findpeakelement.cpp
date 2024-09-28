/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n = nums.size();
        
        vector<int> snums(n);
        
        for (int i = 0; i < n; i++)
        {
            snums[i] = nums[i];
        }

        sort(snums.begin(),snums.end()); 

        int peak = snums[n-1]; 

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == peak)
            {
                return i;
            }
        }
        return -1;    
    }
};
