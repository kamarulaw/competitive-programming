/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        vector<int> arr;
        vector<int> sol;
        map<int,int> m;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (int i = nums[0]; i <= nums[nums.size()-1]; i++)
        {
            if (m[i]==0)
            {
                sol.push_back(i);
            }
        }
        if (sol.size()==0)
        {
            return sol;
        }
        else 
        {
            sort(sol.begin(), sol.end());
            return sol;
        }
    }
};
