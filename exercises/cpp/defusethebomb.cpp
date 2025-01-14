/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        vector<int> sol(code.size(),0);
        if (k == 0)
        {
            return sol;
        }    
        else if (k > 0)
        {
            for (int i = 0; i < code.size(); i++)
            {
                int total = 0;
                for (int j = i+1; j < i+k+1; j++)
                {
                    total += code[j%code.size()];
                }
                sol[i] = total;
            }
        }
        else
        {
            for (int i = code.size(); i < 2*code.size(); i++)
            {
                vector<int> newcode(2*code.size(), 0);
                for (int j = 0; j < newcode.size(); j++)
                {
                    if (i < code.size())
                    {
                        newcode[i] = code[i];
                    }
                    else 
                    {
                        newcode[i] = code[i - code.size()];
                    }
                }
                int total = 0;
                for (int j = i-1; j >= i-1-k; j--)
                {
                    total += newcode[j];
                }
                sol[i] = total;
            }
        }
        return sol;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        vector<int> sol(code.size(),0);
        if (k == 0)
        {
            return sol;
        }    
        else if (k > 0)
        {
            for (int i = 0; i < code.size(); i++)
            {
                int total = 0;
                for (int j = i+1; j < i+k+1; j++)
                {
                    total += code[j%code.size()];
                }
                sol[i] = total;
            }
        }
        else
        {
            vector<int> newcode(2*code.size(), 0);
            for (int j = 0; j < newcode.size(); j++)
            {
                if (j < code.size())
                {
                    newcode[j] = code[j];
                }
                else 
                {
                    newcode[j] = code[j - code.size()];
                }
            }
            for (int i = 0; i < code.size(); i++)
            {

                int total = 0;
                for (int j = i+code.size()-1; j > i+code.size()-1+k; j--)
                {
                    total += newcode[j];
                }
                sol[i] = total;
            }
        }
        return sol;
    }
};
