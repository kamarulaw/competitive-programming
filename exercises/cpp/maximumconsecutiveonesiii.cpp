/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 47 of 56 */
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int mco = 0;

        int n = nums.size(); 

        for (int i = 0; i < n; i++)
        {
            int k_ = k; 
            int i_ = i;
            int cco = 0;
            while (i_ < n)
            {
                if (nums[i_] == 0 && k_ > 0)
                {
                    k_--;
                    i_++;
                    cco++;
                }
                else if (nums[i_] == 1)
                {
                    i_++;
                    cco++;
                }
                else
                {
                    break;
                }

            }
            mco = max(mco, cco);
        }
        return mco;
    }
};
