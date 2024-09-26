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
