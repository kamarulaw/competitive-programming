/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i < n/2; i++)
        {
            int j = 0;
            vector<int> fv;
            fv.push_back(nums[2*i]);
            fv.push_back(nums[2*i+1]);
            while(j < fv[0])
            {
                j++; 
                result.push_back(fv[1]);
            }
        }   
        return result; 
    }
};
