/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k = 0;
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m[nums[i]] == 0)
            {
                k++;
            }
            m[nums[i]]++;
        }   
        for (int i = nums.size()-1; i >= 0; i--)
        {
            if (m[nums[i]] > 1)
            {
                m[nums[i]]--;
                nums.erase(nums.begin() + i);
            }
        }
        return k;
    }
};
