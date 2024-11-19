/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int countQuadruplets(vector<int>& nums) 
    {
        int n = nums.size();
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if (i < j && j < k && k < l && nums[i] + nums[j] + nums[k] == nums[l])
                        {
                            answer++;
                        } 
                    }
                }
            }
        }
        return answer;    
    }
};
// first quadratic O(n^4) solution of mine thats passed, if i recall correctly
