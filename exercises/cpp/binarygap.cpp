/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int binaryGap(int n) 
    {
        int sol = 0;
        string rep = bitset<32>(n).to_string();
        int index = INT_MIN;
        bool found = false;
        for (int i = 0; i < rep.length(); i++)    
        {
            if (rep[i]=='1'&&found==true)
            {
                found = false;
                sol = max(i-index,sol);
            }
            if (rep[i]=='1')
            {
                index = i;
                found = true;
            }
        }
        return sol;
    }
};
