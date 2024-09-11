/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED on CASE 17 of 39 */

class Solution {
public:
    
    // Global Variables
    map<int,int> nmap;
    int nnumdigits = 0;
    

    // Functions
    int nextGreaterElement(int n) 
    {
        int ncopy = n; 

        while (ncopy > 0)
        {
            nnumdigits++;
            nmap[ncopy%10]++; 
            ncopy /= 10;
        }

        vector<long long> candidates; 

        for (long long i = n+1; i < pow(10,nnumdigits); i++)
        {
            candidates.push_back(i);
        }

        for (int i = 0; i < candidates.size(); i++)
        {
            if (is32bitint(candidates[i]) && isnlike(candidates[i]))
            {
                return candidates[i];
            }
        }
        return -1;
    }


    bool is32bitint(int d)
    {
        return d <= 4294967295;
    }

    bool isnlike(int d)
    {
        int dcopy = d;
        map<int,int> dmap;

        while (d > 0)
        {
            if (nmap[d%10] == 0 || dmap[d%10] > nmap[d%10]) 
            {
                return false;
            }
            dmap[d%10]++; 
            d /= 10;
        }

        for (auto it: nmap) 
        {
            if (nmap[it.first] != dmap[it.first])
            {
                return false;
            }
        } 
        
        return true;
    }
};
