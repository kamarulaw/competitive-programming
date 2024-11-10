/* SOLUTION 1 */
/* RUNTIME ERROR ON CASE 8 of 30 */
class Solution {
public:
    static bool comp(vector<int> p1, vector<int> p2)
    {
        return p1[0] + p1[1] <= p2[0] + p2[1];
    }

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        vector<vector<int>> result;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                result.push_back({nums1[i],nums2[j]});
            }
        }
        
        sort(result.begin(),result.end(),comp); 
        vector<vector<int>> answer(result.begin(),result.begin()+k);
        return answer;
    }
};
