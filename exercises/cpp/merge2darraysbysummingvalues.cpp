/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    static bool comp(vector<int> v0, vector<int> v1)
    {
        return v0[0] <= v1[0];
    }

    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
        map<int,int> m;
        for (int i = 0; i < nums1.size(); i++)
        {
            m[nums1[i][0]] += nums1[i][1];
        }    
        for (int i = 0; i < nums2.size(); i++)
        {
            m[nums2[i][0]] += nums2[i][1];
        }
        vector<vector<int>> sol;
        for (auto it : m)
        {
            sol.push_back({it.first, it.second});
        }
        sort(sol.begin(), sol.end(), comp);
        return sol;
    }
};
