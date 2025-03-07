/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        string nrep = bitset<32>(n).to_string();
        int frb = INT_MAX;
        for (int i = 0; i < nrep.length(); i++)
        {
            if (nrep[i]=='1')
            {
                frb = i;
                break;
            }
        }   
        for (int i = frb; i < nrep.length()-1; i++)
        {
            if (nrep[i]==nrep[i+1])
            {
                return false;
            }
        }
        return true;
    }
};
