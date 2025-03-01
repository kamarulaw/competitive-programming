/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) 
    {
        vector<int> sol;
        int n = height.size();
        for (int i = 1; i < n; i++)
        {
            if (height[i-1]>threshold)
            {
                sol.push_back(i);
            }
        }    
        return sol; 
    }
};
