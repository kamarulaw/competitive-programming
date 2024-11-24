/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int> oddindnums;
        vector<int> evenindnums;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i %2 == 0)
            {
                evenindnums.push_back(nums[i]);
            }
            else 
            {
                oddindnums.push_back(nums[i]);
            }
        }
        sort(evenindnums.begin(), evenindnums.end());
        sort(oddindnums.begin(), oddindnums.end()); reverse(oddindnums.begin(), oddindnums.end());
        int oddindex = 0;
        int evenindex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 1)
            {
                nums[i] = oddindnums[oddindex]; oddindex++;
            }
            else
            {
                nums[i] = evenindnums[evenindex]; evenindex++;
            }
        } 
        return nums;   
    }
};
