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
            bool elempushed = false;
            while (lo < hi)
            {
                int mid = lo + (hi-lo)/2;
                product = spells[i] * potions[mid];
                if (product >= success)
                {
                    while (mid-1 >= 0 && spells[i]*potions[mid-1] >= success)
                    {
                        product = spells[i]*potions[mid-1];
                        mid -= mid-1;
                    }
                    result.push_back(mid);
                    elempushed = true;
                    break;
                }
                else if (product < success) 
                {
                    lo = mid + 1; 
                }
            }

            if (elempushed == false)
            {
                result.push_back(0);
            }
            elempushed = false;
        }
        return result;     
    }
};
