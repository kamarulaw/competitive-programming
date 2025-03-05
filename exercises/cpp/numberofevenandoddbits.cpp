/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> evenOddBit(int n) 
    {
        int odd = 0;
        int even = 0;
        vector<int> sol;
        string rep = bitset<32>(n).to_string();
        reverse(rep.begin(),rep.end());
        for (int i = 0; i < rep.length(); i++)
        {
            if (i%2==0)
            {
                if (rep[i]=='1')
                {
                    even++;
                }
            }
            else 
            {
                if (rep[i]=='1')
                {
                    odd++;
                }
            }
        }
        sol.push_back(even);
        sol.push_back(odd);
        return sol;
    }
};
