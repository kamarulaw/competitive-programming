/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    bool is_prime(int n)
    {
        if (n==2)
        {
            return true;
        }
        if (n<2||n%2==0)
        {
            return false;
        }
        for (int i = 2; i <= (int)pow(n,.5)+1; i++)
        {
            if (n%i==0)
            {
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) 
    {
        int sol = 0;
        for (int num = left; num <= right; num++)
        {
            int sbc = 0;
            string rep = bitset<32>(num).to_string();
            for (int j = 0; j < rep.length(); j++)
            {
                if (rep[j]=='1')
                {
                    sbc++;
                }
            }
            if (is_prime(sbc))
            {
                sol++;
            }
        }    
        return sol;
    }
};
