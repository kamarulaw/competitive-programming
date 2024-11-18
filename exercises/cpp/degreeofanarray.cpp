/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 23 of 89 */
class Solution {
public:
    int arraydegree(vector<int> nums_)
    {
        int deg = INT_MIN;
        map<int,int> m;   
        for (int i = 0; i < nums_.size(); i++)
        {
            m[nums_[i]]++;
            deg = max(deg, m[nums_[i]]);
        } 
        return deg;
    }

    int findShortestSubArray(vector<int>& nums) 
    {
        int minlen = INT_MAX;
        int n = nums.size();
        int nd = arraydegree(nums);
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                vector<int> subarr(nums.begin()+i,nums.begin()+i+j);
                if (arraydegree(subarr) == nd)
                {
                    if (subarr.size() < minlen)
                    {
                        minlen = subarr.size();
                    }
                }
            }
        }
        return minlen;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        int deg = INT_MIN;
        vector<int> degnums;
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            if (m[nums[i]] > deg)
            {
                deg = m[nums[i]];
            }
        }

        for (auto it: m)
        {
            if (it.second == deg)
            {
                degnums.push_back(it.first);
            }
        }
        
        map<int,vector<int>> ranges;
        
        for (int i = 0; i < degnums.size(); i++)
        {
            ranges[degnums[i]] = {INT_MAX,INT_MIN};
        }

        for (int i = 0; i < degnums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] == degnums[i])
                {
                    ranges[degnums[i]][0] = min(ranges[degnums[i]][0],j);
                    ranges[degnums[i]][1] = max(ranges[degnums[i]][1],j);
                }
            }
        }

        int answer = INT_MAX;
        for (int i = 0; i < degnums.size(); i++)
        {
            if (1 + ranges[degnums[i]][1] - ranges[degnums[i]][0] < answer)
            {
                answer = 1 + ranges[degnums[i]][1] - ranges[degnums[i]][0];
            }
        }
        return answer;
    }
};
