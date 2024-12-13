/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countElements(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());   
        int sol = 0; 
        int min_ = nums[0];
        int max_ = nums[n-1];
        for (int i = 0; i < nums.size(); i++)
        {
            bool flag = true;
            if (nums[i] == min_)
            {
                flag = false;
            }
            if (nums[i] == max_)
            {
                flag = false;
            }
            if (flag)
            {
                sol++;
            }
        }
        return sol; 
    }
};
