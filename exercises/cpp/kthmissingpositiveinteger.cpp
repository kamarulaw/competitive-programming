/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int ind = 0;
        int found = 0;
        int guess = 1;
        int n = arr.size();
        while (found < k)
        {
            if (ind < n)
            {
                if (arr[ind] == guess)
                {
                    ind++;
                    guess++;
                }
                else if (arr[ind] < guess)
                {
                    ind++;
                }
                else 
                {
                    guess++;
                    found++;
                }
            }
            else 
            {
                guess++;
                found++;
            }
        }
        return guess-1;    
    }
};
