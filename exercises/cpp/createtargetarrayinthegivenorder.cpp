/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int> target;    
        int n = index.size();
        target.push_back(nums[0]);
        for (int i = 1; i < n; i++)
        {
            int index_ = index[i];
            int number = nums[i];
            if (index_ >= target.size())
            {
                target.push_back(number);
            }
            else 
            {
                target.insert(target.begin() + index_, number);
            }
        }
        return target;
    }
};
