/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) 
    {
        vector<int> result;
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); i++)
        {
            int lo = 0;
            int hi = potions.size() - 1;
            long long product = 1;
            bool condsat = false;
            while (condsat == false)
            {
                int mid = lo + (hi-lo)/2;
                product = spells[i] * potions[mid];
                if (product == success)
                {
                    while (mid-1 >= 0 && product == success)
                    {
                        if (mid-1 >= 0 && spells[i]*potions[mid-1])
                        {
                            mid = mid-1;
                        }
                    }
                    condsat = true;
                    result.push_back(mid);
                }
                else if (product < success) 
                {
                    lo = mid + 1; 
                }
            }
            condsat = false;
        }
        return result;     
    }
};
