/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int num_to_remove = n/20;
        vector<int> subset;
        for (int i = num_to_remove; i < n - num_to_remove; i++)
        {
            subset.push_back(arr[i]);
        }
        int total = 0;
        for (int i = 0; i < subset.size(); i++)
        {
            total += subset[i];
        }
        double sol = (double)(total)/subset.size();
        return sol;
    }
};
