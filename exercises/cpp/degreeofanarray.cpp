/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 23 of 89 */
class Solution {
public:
    int arraydegree(vector<int> nums_)
    {
        int deg = INT_MIN;
        map<int,int> m;   
        for (int i = 0; i < nums_.size(); i++)
        {
            m[nums_[i]]++;
            deg = max(deg, m[nums_[i]]);
        } 
        return deg;
    }

    int findShortestSubArray(vector<int>& nums) 
    {
        int minlen = INT_MAX;
        int n = nums.size();
        int nd = arraydegree(nums);
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                vector<int> subarr(nums.begin()+i,nums.begin()+i+j);
                if (arraydegree(subarr) == nd)
                {
                    if (subarr.size() < minlen)
                    {
                        minlen = subarr.size();
                    }
                }
            }
        }
        return minlen;
    }
};
