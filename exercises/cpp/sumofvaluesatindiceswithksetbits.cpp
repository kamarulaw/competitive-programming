/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i++)
        {
            string rep = bitset<32>(i).to_string();
            int sbc = 0;
            for (int j = 0; j < rep.length(); j++)
            {
                if (rep[j]=='1')
                {
                    sbc++;
                }
            }
            if (sbc==k)
            {
                arr.push_back(nums[i]);
            }
        }
        int sol = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sol += arr[i];
        } 
        return sol;
    }
};
