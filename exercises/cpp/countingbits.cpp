/* SOLUTION 1 */ 
/* progress so far */ 
class Solution {
public:
    int nods(int n)
    {
        int nods = 0;
        while (n > 0)
        {
            n /= 2;
            nods++;
        }
        return nods;
    }

    vector<int> countBits(int n)
    {
        int nod = nods(n); 
        return result;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> sol(n+1,0);
        for (int i = 0; i <= n; i++)
        {
            int sbc = 0;
            string rep = bitset<32>(i).to_string();
            for (int j = 0; j < rep.length(); j++)
            {
                if (rep[j]=='1')
                {
                    sbc++;
                }
            }
            sol[i] = sbc;
        }    
        return sol;
    }
};
