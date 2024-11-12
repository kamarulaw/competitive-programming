/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int index = 0; int operations = 0; int n = nums.size();
        while (index < n)
        {
            if (nums[index] == 0)
            {
                index++;
            }
            else 
            {
                int x = nums[index];
                
                for (int i = index; i < n; i++)
                {
                    nums[i] = nums[i] - x;
                }
                operations++; index++;
            }
        }
        return operations;    
    }
};
