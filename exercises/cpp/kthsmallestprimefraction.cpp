/* SOLUTION 1  */ 
/* TIME LIMIT EXCEEDED ON CASE 53 of 59 */
class Solution {
public:
    static bool comp(vector<int> frac1, vector<int> frac2)
    {
        return (double)frac1[0]/frac1[1] <= (double)frac2[0]/frac2[1]; 
    }

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
        int n = arr.size();
        vector<vector<int>> fracs;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j)
                {
                    fracs.push_back({arr[i],arr[j]});
                }
            }
        }
        sort(fracs.begin(), fracs.end(), comp);
        return fracs[k-1];  
    }
};
