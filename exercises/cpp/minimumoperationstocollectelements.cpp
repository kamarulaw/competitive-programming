/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int ans = 0;
        int n = nums.size();
        vector<bool> visited(n,false);
        bool collectedflag = false;
        for (int i = n-1; i >= 0; i--)
        {
            ans++;
            visited[nums[i]-1] = true;
            nums.pop_back();
            collectedflag = true;
            for (int j = 0; j < k; j++)
            {
                if (!(visited[j]))
                {
                    collectedflag = false;
                }
            }
            if (collectedflag)
            {
                return ans;
            }
        }    
        return ans;
    }
};
