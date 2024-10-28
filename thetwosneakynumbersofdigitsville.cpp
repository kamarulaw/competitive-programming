/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) 
    {
        map<int,int> m;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++; 
            if (m[nums[i]] > 1)
            {
                result.push_back(nums[i]);
            }
            if (result.size() > 1)
            {
                return result;
            }
        }
        return result;    
    }
};
