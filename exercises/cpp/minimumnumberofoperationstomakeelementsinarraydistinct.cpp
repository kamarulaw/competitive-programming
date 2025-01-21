/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int ans = 0;
        bool start = true;
        bool notunique = true;
        while (start || notunique)
        {
            start = false;
            notunique = false;
            map<int,int> m;
            for (int i = 3*ans; i < nums.size(); i++)
            {
                m[nums[i]]++;
                if (m[nums[i]] > 1)
                {
                    ans++;
                    notunique = true;
                    break;
                }
            }
        }    
        return ans;
    }
};
