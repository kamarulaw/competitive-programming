/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
        int n = nums.size();
        set<int> sol;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            int ind = i;
            if (abs(i - ind) <= k && nums[ind] == key)
            {
                count++;
            }
            int leftind = ind-1;
            while (leftind >= 0 && abs(i - leftind) <= k)
            {
                if (nums[leftind] == key)
                {
                    count++;
                }
                leftind--;
            }
            int rightind = ind+1;
            while (rightind < n && abs(i - rightind) <= k)
            {
                if (nums[rightind] == key)
                {
                    count++;
                }
                rightind++;
            }
            if (count > 0)
            {
                sol.emplace(i);
            }
        }   
        vector<int> vsol(sol.begin(), sol.end());
        sort(vsol.begin(), vsol.end());
        return vsol;
    }
};
