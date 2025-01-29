/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int maxDistance(vector<int>& colors) 
    {
        int sol = INT_MIN;
        int n = colors.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (colors[i] != colors[j])
                {
                    sol = max(sol,abs(i-j));
                }
            }
        }    
        return sol;
    }
};
