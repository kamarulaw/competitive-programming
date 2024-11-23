/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    double minimumAverage(vector<int>& nums) 
    {
        int p1 = 0;
        int p2 = nums.size()-1;
        double avg = 100.0;
        sort(nums.begin(), nums.end());
        while (p1 < p2)
        {
            avg = min(avg,(nums[p1] + nums[p2])/2.0);
            p1++;
            p2--;
        }   
        return avg; 
    }
};
