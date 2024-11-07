/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int meii = n/3;
        map<int,int> m;
        set<int> answer;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
            if (m[nums[i]] > meii)
            {
                answer.emplace(nums[i]);
            }
        }
        vector<int> vanswer(answer.begin(),answer.end());
        return vanswer;    
    }
};
