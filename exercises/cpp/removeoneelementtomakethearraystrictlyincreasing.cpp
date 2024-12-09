/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) 
    {
        int count = 0;
        vector<int> vec1;
        vector<int> vec2;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i-1] >= nums[i])
            {
                count++;
                if (count > 0)
                {
                    for (int j = 0; j <= i-1; j++)
                    {
                        vec1.push_back(nums[j]);
                    }
                    for (int j = i+1; j < nums.size(); j++)
                    {
                        vec1.push_back(nums[j]);
                    }
                    for (int j = 0; j < i-1; j++)
                    {
                        vec2.push_back(nums[j]);
                    }
                    for (int j = i; j < nums.size(); j++)
                    {
                        vec2.push_back(nums[j]);
                    }
                    break;
                }
            }
        }
        bool flag1 = true;
        bool flag2 = true;
        for (int i = 1; i < vec1.size(); i++)
        {
            if (vec1[i] <= vec1[i-1])
            {
                flag1 = false;
            }
        }
        for (int i = 1; i < vec2.size(); i++)
        {
            if (vec2[i] <= vec2[i-1])
            {
                flag2 = false;
            }
        }
        return flag1 || flag2;
    }
};
