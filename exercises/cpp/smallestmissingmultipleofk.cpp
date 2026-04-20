/* SOLUTION 1 */
/* progress so far */

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        map<int,int> m;
        vector<int> sol_arr;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % k == 0)
            {
                sol_arr.push_back(nums[i]/k);
            }
        }    
        sort(sol_arr.begin(), sol_arr.end());
        if (sol_arr.size() == 0 || sol_arr[0] != k)
        {
            return k;
        }
        else
        {
            for (int i = 0; i < sol_arr.size(); i++)
            {
                if (sol_arr[i] != k*(i+1))
                {
                    return (i+1)*k;
                }
            }
        }
        return (sol_arr.size())*k;
    }
};

/* SOLUTION 2 */
/* WRONG ANSWER ON CASE 649 of 664 */

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        vector<int> nums_;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i]%k==0)
            {
                nums_.push_back(nums[i] / k);
            }
        }
        int n_ = nums_.size();
        sort(nums_.begin(), nums_.end());
        if (nums_.size() == 0 || nums_[0] != 1)
        {
            return k;
        }
        else if (nums_[n_-1] == n_ && nums_[0] == 1)
        {
            return k * (n_+1);
        }
        else 
        {
            for (int i = 0; i < n_ - 1; i++)
            {
                if (nums_[i+1] - nums_[i] != 1)
                {
                    return (nums_[i] + 1) * k;
                }
            }
        }
        return INT_MAX;
    }
};

/* SOLUTION 3 */
/* All tests passed */
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        vector<int> nums_;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i]%k==0)
            {
                nums_.push_back(nums[i] / k);
            }
        }
        map<int,int> m;
        int n_ = nums_.size();
        for (int i = 0; i < n_; i++)
        {
            m[nums_[i]]++;
        }
        nums_.clear();
        for (auto it : m)
        {
            nums_.push_back(it.first);
        }
        n_ = nums_.size();
        sort(nums_.begin(), nums_.end());
        for (int i = 0; i < n_; i++)
        {
            cout << nums_[i] << " ";
        }
        if (nums_.size() == 0 || nums_[0] != 1)
        {
            return k;
        }
        else if (nums_[n_-1] == n_ && nums_[0] == 1)
        {
            return k * (n_+1);
        }
        else 
        {
            for (int i = 0; i < n_ - 1; i++)
            {
                if (nums_[i+1] - nums_[i] != 1)
                {
                    return (nums_[i] + 1) * k;
                }
            }
        }
        return INT_MAX;
    }
};
