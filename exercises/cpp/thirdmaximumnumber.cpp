/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        map<int,int> m;

        int distinct = 0;
        
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());   

        for (int i = 0; i < nums.size(); i++)
        {
            if (m[nums[i]] == 0)
            {
                m[nums[i]]++; 
                distinct++;
            }

            if (distinct == 3)
            {
                return nums[i];
            }
        }

        return nums[0];
    }
};
