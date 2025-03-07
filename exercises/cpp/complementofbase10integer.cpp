/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if (n==0)
        {
            return 1;
        }
        int frb;
        string nrep = bitset<32>(n).to_string();
        for (int i = 0; i < nrep.length(); i++)
        {
            if (nrep[i]=='1')
            {
                frb = i;
                break;
            }
        }
        nrep = nrep.substr(frb,nrep.length()-frb);
        int sol = 0;
        reverse(nrep.begin(),nrep.end());
        for (int i = 0; i < nrep.length(); i++)    
        {
            if (nrep[i]=='0')
            {
                sol += (int)pow(2,i);
            }
        }
        return sol;
    }
};
