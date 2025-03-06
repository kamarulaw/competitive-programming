/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) 
    {
        int n = nums.size();
        vector<string> numreps(n,0);
        int mrb = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            string rep = bitset<32>(nums[i]).to_string();
            numreps[i] = rep;
            for (int j = 0; j < rep.length(); j++)
            {
                if (rep[j]=='1')
                {
                    mrb = min(j,mrb);
                    break;
                }
            }
        }
        mrb--;
        for (int i = 0; i < n; i++)
        {
            //reverse(rep[i].begin(),rep[i].end());
            if (mrb!=-1)
            {
                rep[i] = rep[i].substr(mrb,rep[i].length()-mrb);
                reverse(rep[i].begin(),rep[i].end());
            }
            else 
            {
                reverse(rep[i].begin(),rep[i].end());
                rep[i]+='0';
            }
        }   
    }
};
