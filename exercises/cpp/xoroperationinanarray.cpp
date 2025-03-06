/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int xorOperation(int n, int start) 
    {
        vector<int> arr(n,0);
        for (int i = 0; i < n; i++)
        {
            arr[i] = start + 2*i;
        }
        int sol = arr[0];
        for (int i = 1; i < n; i++)
        {
            sol ^= arr[i];
        }
        return sol;
    }
};
