/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maximum69Number (int num) 
    {
        vector<int> nums;
        nums.push_back(num);
        string num_ = to_string(num);
        int n = num_.length();
        for (int i = 0; i < n; i++)
        {
            if (num_[i] == '6')
            {
                num_[i] = '9';
                nums.push_back(stoi(num_));
                num_[i] = '6';
            }
            else
            {
                num_[i] = '6';
                nums.push_back(stoi(num_));
                num_[i] = '9';
            }
        }
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1];
    }
};
