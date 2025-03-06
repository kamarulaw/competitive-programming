/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    int findComplement(int num) 
    {
        int sol = 0;
        string numrep = bitset<32>(num).to_string();   
        int lri = INT_MIN;
        for (int i = 0; i < numrep.length(); i++)
        {
            if (numrep[i]=='1')
            {
                lri = i; 
                break;
            }
        }
        string comprep = numrep.substr(lri,numrep.length()-lri);
        for (int i = 0; i < comprep.length(); i++)
        {
            if (comprep[i]=='1')
            {
                comprep[i] = '0'; 
            }
            else 
            {
                comprep[i] = '1';
            }
        }
        reverse(comprep.begin(),comprep.end());
        for (int i = 0; i < comprep.length(); i++)
        {
            if (comprep[i]=='1')
            {
                sol += (int)pow(2,i);
            }
        }
        return sol;
    }
};
