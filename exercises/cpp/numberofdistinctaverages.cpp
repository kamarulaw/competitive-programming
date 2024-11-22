/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 8 of 36 */
class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        set<double> avgs;
        sort(nums.begin(), nums.end());
        while (nums.size() > 0)
        {
            int tot = 0;
            nums.erase(nums.begin()+0);
            nums.erase(nums.begin()+nums.size());
            for (int i = 0; i < nums.size(); i++)
            {
                tot += nums[i];
            }
            avgs.emplace((double)tot/nums.size());
        }    
        return avgs.size();
    }
};
