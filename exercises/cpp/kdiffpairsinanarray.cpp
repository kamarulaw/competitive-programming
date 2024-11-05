/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        int n = nums.size(); 
        set<string> kds;
        sort(nums.begin(),nums.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && abs(nums[i]-nums[j]) == k)
                {
                    vector<int> vals = {nums[i],nums[j]};
                    sort(vals.begin(), vals.end());
                    string result = to_string(vals[0]); 
                    result += " "; 
                    result += to_string(vals[1]);
                    cout << result << endl;
                    kds.emplace(result);
                }
            }
        }
        return kds.size();
    }
};
