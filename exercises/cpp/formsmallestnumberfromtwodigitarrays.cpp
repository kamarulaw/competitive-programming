/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) 
    {
        int min1 = INT_MAX; int min2 = INT_MAX; 
        map<int,int> m1; map<int,int> m2;

        for (int i = 0; i < nums1.size(); i++)
        {
            min1 = min(min1, nums1[i]); m1[nums1[i]]++; 
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            min2 = min(min2, nums2[i]); m2[nums2[i]]++;
        }
        int mininboth = INT_MAX;
        for (auto it: m1)
        {
            if (m2[it.first] > 0 && it.first < mininboth)
            {
                mininboth = it.first;
            }
        }
        if (mininboth != INT_MAX)
        {
            return mininboth;
        }
        string num;
        if (min1 <= min2)
        {
            num = to_string(min1); num += to_string(min2);
        }
        else
        {
            num = to_string(min2); num += to_string(min1);
        }
        return stoi(num);    
    }
};
