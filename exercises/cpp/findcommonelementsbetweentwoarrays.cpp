/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        map<int,int> n1;
        map<int,int> m1;
        for (int i = 0; i < n; i++)
        {
            n1[nums1[i]]++;
        }    
        for (int i = 0; i < m; i++)
        {
            m1[nums2[i]]++;
        }
        int index0 = 0;
        int index1 = 0;
        for (auto it : n1)
        {
            if (m1[it.first] > 0)
            {
                index0 += it.second;
            }
        }
        for (auto it : m1)
        {
            if (n1[it.first] > 0)
            {
                index1 += it.second;
            }
        }
        return {index0,index1};
    }
};
