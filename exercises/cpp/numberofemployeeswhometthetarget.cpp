/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) 
    {
        int start = INT_MIN;
        int n = hours.size();
        sort(hours.begin(),hours.end());
        for (int i = 0; i < n; i++)
        {
            if (hours[i] >= target)
            {
                start = i; break;
            }
        }
        if (start != INT_MIN)
        {
            return n-1-start+1;
        }
        else
        {
            return 0;
        }
    }
};
