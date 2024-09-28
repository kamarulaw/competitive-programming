/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 37 of 56 */
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
                        mid = mid-1;
                    }
                    result.push_back(hi - mid + 1);
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

/* SOLUTION 2 */ 
/* RUNTIME ERROR ON CASE 48 of 56 */
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
            bool elempushed = false;
            while (lo < hi)
            {
                int mid = lo + (hi-lo)/2;
                long long product = spells[i] * potions[mid];
                if (product >= success)
                {
                    while (mid-1 >= 0 && spells[i]*potions[mid-1] >= success)
                    {
                        product = spells[i]*potions[mid-1];
                        mid = mid-1;
                    }
                    result.push_back(hi - mid + 1);
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
                if (potions[hi] * spells[i] >= success)
                {
                    result.push_back(1);
                }
                else
                {
                    result.push_back(0);
                }
            }
            elempushed = false;
        }

        return result;     
    }
};

/* SOLUTION 3 */ 
/* RUNTIME ERROR ON CASE 49 of 56 */
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
            bool elempushed = false;
            while (lo < hi)
            {
                int mid = lo + (hi-lo)/2;
                long long product = (long long)spells[i] * (long long)potions[mid];
                if (product >= success)
                {
                    while (mid-1 >= 0 && (long long)spells[i] * (long long)potions[mid-1] >= success)
                    {
                        product = (long long)spells[i] * (long long)potions[mid-1];
                        mid = mid-1;
                    }
                    result.push_back(hi - mid + 1);
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
                if (potions[hi] * spells[i] >= success)
                {
                    result.push_back(1);
                }
                else
                {
                    result.push_back(0);
                }
            }
            elempushed = false;
        }

        return result;     
    }
};

/* SOLUTION 4 */ 
/* TIME LIMIT EXCEEDED ON CASE 54 of 56 */
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
            bool elempushed = false;
            while (lo < hi)
            {
                int mid = lo + (hi-lo)/2;
                long long product = (long long)spells[i] * (long long)potions[mid];
                if (product >= success)
                {
                    while (mid-1 >= 0 && (long long)spells[i] * (long long)potions[mid-1] >= success)
                    {
                        product = (long long)spells[i] * (long long)potions[mid-1];
                        mid = mid-1;
                    }
                    result.push_back(hi - mid + 1);
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
                if ((long long)potions[hi] * (long long)spells[i] >= success)
                {
                    result.push_back(1);
                }
                else
                {
                    result.push_back(0);
                }
            }
            elempushed = false;
        }

        return result;     
    }
};
