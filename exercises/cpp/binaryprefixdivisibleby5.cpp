/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) 
    {
        int n = nums.size();
        vector<bool> sol(n,false);
        for (int i = 0; i < n; i++) 
        {
            string rep = "";
            for (int ii = 0; ii <= i; ii++)
            {
                if (nums[ii]==0)
                {
                    rep+='0';
                }
                else 
                {
                    rep+='1';
                }
            }
            reverse(rep.begin(),rep.end());
            int num = 0;
            for (int ii = 0; ii < rep.length(); ii++)
            {
                if (rep[ii]=='1')
                {
                    num+=((int)pow(2,ii));
                }
            }
            if (num%5==0)
            {
                sol[i]=true;
            }
        }
        return sol;
    }
};
