/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int getLeastFrequentDigit(int n) 
    {
        map<int,int> m;
        
        while (n > 0)
        {
            m[n%10]++;
            n /= 10;
        }    
        
        int digit = INT_MAX;
        int frequency = INT_MAX;
        for (auto it : m)
        {
            if (it.second < frequency)
            {
                digit = it.first; 
                frequency = it.second;
            }
            else if (it.second == frequency && it.first < digit)
            {
                digit = it.first;
            }
        }
        return digit;
    }
};
