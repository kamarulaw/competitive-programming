/* SOLUTION 1 */
/* progres so far */

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) 
    {
        map<int,int> m;
        int n = nums.size();
        
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }

        map<int,int> refined_map;

        for (auto it : m)
        {
            if (it.first%2==0 && it.second==1)
            {
                refined_map[it.first] = 1;
            }
        }

        int ans = -1;
        for ()    
    }
};
