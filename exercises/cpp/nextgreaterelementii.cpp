class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        map<int, int> m; 
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int val = -1;
            bool val_changed = false;
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[j] > nums[i])
                {
                    val = nums[j];
                    val_changed = true;
                    break;
                }
            }

            if (val_changed == true)
            {
                m[i] = val;
            }
            else
            {
                for (int j = 0; j < i; j++)
                {
                    if (nums[j] > nums[i])
                    {
                        val = nums[j];
                        break; 
                    }
                }
                m[i] = val;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(m[i]);
        }
        return result; 
    }
};
