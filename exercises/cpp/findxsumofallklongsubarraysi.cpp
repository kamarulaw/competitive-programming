/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) 
    {
        vector<int> sol;
        int n = nums.size();
        for (int i = 0; i < n-k+1; i++)
        {
            vector<int> subarr(nums.begin()+i, nums.begin()+i+k);
            sol.push_back(xsum(subarr, x));
        }
        return sol;
    }

    static bool comp(vector<int> v1, vector<int> v2)
    {
        if (v1[1] != v2[1])
        {
            return v1[1] <= v2[1];
        }
        return v1[0] <= v2[0];
    }

    int xsum(vector<int> arr, int x)
    {
        int tot = 0;
        map<int,int> m;
        vector<vector<int>> kv;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for (auto it: m)
        {
            kv.push_back({it.first, it.second});
        }
        sort(kv.begin(), kv.end(), comp); reverse(kv.begin(), kv.end()); 
        for (int i = 0; i < min(x,(int)kv.size()); i++)
        {
            tot += kv[i][0] * kv[i][1];
        }
        return tot;
    }
};
