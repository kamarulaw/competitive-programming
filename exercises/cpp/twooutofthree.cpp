/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        vector<int> result;
        map<int,int> m1; 
        map<int,int> m2;
        map<int,int> m3;
        for (int i = 0; i < nums1.size(); i++)
        {
            m1[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            m2[nums2[i]]++;
        }
        for (int i = 0; i < nums3.size(); i++)
        {
            m3[nums3[i]]++;
        }
        set<int> keys;
        for (auto it: m1)
        {
            keys.emplace(it.first);
        }
        for (auto it: m2)
        {
            keys.emplace(it.first);
        }
        for (auto it: m3)
        {
            keys.emplace(it.first);
        }
        vector<int> keys_(keys.begin(), keys.end());
        for (auto elem: keys_)
        {
            if ((m1[elem] >= 1 && m2[elem] >= 1) || (m2[elem] >= 1 && m3[elem] >= 1) || (m1[elem] >= 1 && m3[elem] >= 1))
            {
                result.push_back(elem);
            }
        }
        return result;
    }
};
