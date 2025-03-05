/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int hammingWeight(int n) 
    {
        int sol = 0;
        string rep = bitset<32>(n).to_string();
        for (int i = 0; i < rep.length(); i++)
        {
            if (rep[i]=='1')
            {
                sol++;
            }
        }    
        return sol;
    }
};
