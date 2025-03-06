/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int findKOr(vector<int>& nums, int k) 
    {
        if (nums.size()==1&&nums[0]==0)
        {
            return 0;
        }
        int n = nums.size();
        vector<string> numreps(n,"");
        int rsb = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            string rep = bitset<32>(nums[i]).to_string();
            numreps[i] = rep;
            for (int j = 0; j < rep.length(); j++)
            {
                if (rep[j]=='1')
                {
                    rsb = min(j,rsb);
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            numreps[i] = numreps[i].substr(rsb,numreps[i].length()-rsb);
        }    
        string solrep = "";
        for (int i = 0; i < numreps[0].length(); i++)
        {
            int sbic = 0;
            for (int j = 0; j < n; j++)
            {
                if (numreps[j][i]=='1')
                {
                    sbic++;
                }
            }
            if (sbic>=k)
            {
                solrep+='1';
            }
            else
            {
                solrep+='0';
            }
        }
        int sol = 0;
        reverse(solrep.begin(),solrep.end());
        for (int i = 0; i < solrep.length(); i++)
        {
            if (solrep[i]=='1')
            {
                sol += (int)pow(2,i);
            }
        }
        return sol;
    }
};
