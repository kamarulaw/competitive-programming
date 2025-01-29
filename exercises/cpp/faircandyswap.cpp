/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) 
    {
        int ssa = aliceSizes.size();
        int ssb = bobSizes.size();
        int alicetotal = 0;
        int bob__total = 0; 
        for (int i = 0; i < ssa; i++)
        {
            alicetotal += aliceSizes[i];
        }    
        for (int i = 0; i < ssb; i++)
        {
            bob__total += bobSizes[i];
        }
        for (int i = 0; i < ssa; i++)
        {
            for (int j = 0; j < ssb; j++)
            {
                if (alicetotal - aliceSizes[i] + bobSizes[j] == bob__total - bobSizes[j] + aliceSizes[i])
                {
                    return {aliceSizes[i],bobSizes[j]};
                }
            }
        }
        return {INT_MIN,INT_MIN};
    }
};
