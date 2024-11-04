/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int numpos = 0;
        int numneg = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                numpos++; 
            }
            else if (nums[i] < 0)
            {
                numneg++;
            }
        }
        return max(numpos, numneg);
    }
};
