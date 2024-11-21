/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    {
        map<int,int> m;
        int n = nums.size();
        for (int i = 0; i < nums[0].size(); i++)
        {
            m[nums[0][i]]++;
        }
        vector<int> sol;
        for (auto it: m)
        {
            bool allpresent = true;
           
            for (int i = 1; i < n; i++)
            {
                vector<int> nums_ = nums[i];
                bool itfirst_present = false;
                for (int j = 0; j < nums_.size(); j++)
                {
                    if (nums_[j] == it.first)
                    {
                        itfirst_present = true;
                        break;
                    }
                }
                allpresent &= itfirst_present;
            }
            if (allpresent == true)
            {
                sol.push_back(it.first);
            }
        }
        return sol;
    }
};
