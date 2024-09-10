class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        vector<int> result; 
        for(int i = 0; i < nums2.size(); i++)
        {
            int val = -1;
            for (int j = i+1; j < nums2.size(); j++)
            {
                if (nums2[j] > nums2[i])
                {
                    val = nums2[j];
                    break;
                }
            }
            m[nums2[i]] = val;
        }

        for (int i = 0; i < nums1.size(); i++)
        {
            result.push_back(m[nums1[i]]);
        }
        return result; 
    }
};
