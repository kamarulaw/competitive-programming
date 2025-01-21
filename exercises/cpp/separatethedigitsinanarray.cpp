/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int curr = nums[i];
            vector<int> temp;
            while (curr > 0)
            {
                temp.push_back(curr % 10);
                curr /= 10;
            }
            for (int j = temp.size()-1; j >= 0; j--)
            {
                ans.push_back(temp[j]);
            }
        }    
        return ans;
    }
};
