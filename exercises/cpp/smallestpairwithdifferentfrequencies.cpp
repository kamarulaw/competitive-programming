/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) 
    {
        map<int,int> m;
        int n = nums.size();
        
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        
        vector<int> ans = {INT_MAX, INT_MAX};
 
        for (auto it : m)
        {
            for (auto it2 : m)
            {
                if (it.first < it2.first && it.second != it2.second)
                {
                    if (it.first < ans[0])
                    {
                        if (it2.first < ans[0])
                        {
                            ans[0] = it.first;
                            ans[1] = it2.first;
                        }
                    }
                }
            }
        }
        if (ans[0]==INT_MAX)
        {
            return {-1,-1};
        }
        else
        {
            return ans;
        }
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) 
    {
        map<int,int> m;
        int n = nums.size();
        
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        
        vector<int> ans = {INT_MAX, INT_MAX};
 
        for (auto it : m)
        {
            for (auto it2 : m)
            {
                if (it.first < it2.first && it.second != it2.second)
                {
                    if (it.first < ans[0])
                    {
                        if (it2.first < ans[1])
                        {
                            ans[0] = it.first;
                            ans[1] = it2.first;
                        }
                    }
                }
            }
        }
        if (ans[0]==INT_MAX)
        {
            return {-1,-1};
        }
        else
        {
            return ans;
        }
    }
};
