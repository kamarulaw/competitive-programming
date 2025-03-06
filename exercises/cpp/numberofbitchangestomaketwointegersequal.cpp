/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int minChanges(int n, int k) 
    {
        int sol = -1;
        string nrep = bitset<32>(n).to_string();
        string krep = bitset<32>(k).to_string(); 
        int lri_n = INT_MIN;
        int lri_k = INT_MIN;
        for (int i = 0; i < nrep.length(); i++)
        {
            if (nrep[i]=='1')
            {
                lri_n = i;
            }
        }    
        for (int i = 0; i < krep.length(); i++)
        {
            if (krep[i]=='1')
            {
                lri_k = i;
            }
        }
        if (lri_k > lri_n)
        {
            return sol;
        }
        int count = 0;
        for (int i = 0; i <= lri_n; i++)
        {
            if (krep[i]=='0'&&nrep[i]=='1')
            {
                count++;
            }
            if (krep[i]=='1'&&nrep[i]=='0')
            {
                return sol;
            }
        }
        return count;
    }
};
