/* SOLUTION 1*/ 
/* All tests passed */
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

/* SOLUTION 2*/ 
/* WRONG ANSWER on CASE 153 of 223*/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s; 
        map<int, int> m; 
        vector<int> result;

        vector<int> nums_cycled;
        for (int i = 0; i < nums.size(); i++)
        {
            nums_cycled.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            nums_cycled.push_back(nums[i]);
        } 
        
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]] = -1;
        }

        for (int i = nums_cycled.size()-1; i >= 0; i--)
        {
            while (s.size() > 0 && nums_cycled[i] >= nums_cycled[s.top()])
            {
                s.pop(); 
            }

            if (s.size() > 0)
            {
                m[nums_cycled[i]] = nums_cycled[s.top()];
            }

            s.push(i);
        }

        for (int i = nums.size(); i < 2*nums.size(); i++)
        {
            result.push_back(m[nums_cycled[i]]);
        }
        return result; 
    }
};
