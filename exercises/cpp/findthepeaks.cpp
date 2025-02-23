/* SOLUTION 1 */
/* All tests passed */ 

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) 
    {
        vector<int> sol;
        int n = mountain.size();
        for (int i = 1; i < n-1; i++)
        {
            if (mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1])
            {
                sol.push_back(i);
            }
        }
        return sol;   
    }
};
