/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 14 of 41 */
class Solution {
public:
    int findLUSlength(string a, string b) 
    {
        int sol = -1;
        int n_a = a.length();
        int n_b = b.length();
        map<char,int> bmap;
        for (int i = 0; i < n_b; i++)
        {
            bmap[b[i]]++;
        }
        vector<bool> inb;
        for (int i = 0; i < n_a; i++)
        {
            if (bmap[a[i]] > 0)
            {
                inb.push_back(true);
            }
            else
            {
                inb.push_back(false);
            }
        }
        int count = 0;
        for (int i = 0; i < n_a; i++)
        {
            if (inb[i] == false)
            {
                count++;
            }
            else 
            {
                count = 0;
            }
            if (count > 0 && count > sol)
            {
                sol = count;
            }
        }
        return sol;
    }
};
