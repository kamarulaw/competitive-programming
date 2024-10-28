/* SOLUTION 1 */
/* psf: PRE-TEST 2 passed, PRE-TEST 1 failed */
class Solution {
public:
    static bool comp(vector<int> v1, vector<int> v2)
    {
        if (v1[1] != v2[1])
        {
            return v1[1] <=  v2[1];
        }
        else
        {
            return v1[0] <= v2[0];
        }
    }

    vector<int> findXSum(vector<int>& nums, int k, int x) 
    {
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i <= n-k; i++)
        {
            map<int,int> m;
            for (int j = 0; j < k; j++)
            {
                m[nums[i+j]]++;
            }
            vector<vector<int>> v; 
            for (auto it: m)
            {
                v.push_back({it.first, it.second});
            }
            sort(v.begin(), v.end(), comp); reverse(v.begin(), v.end());
            int total = 0;
            for (int k = 0; k < x ; k++)
            {
                total += v[k][0];
            }
            result.push_back(total);
        }
        return result;
    }
};
