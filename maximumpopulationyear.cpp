/* SOLUTION 1 */ 
/* All tests passed */ 
class Solution {
public:
    static bool comp(vector<int> a, vector<int> b)
    {
        if (a[0] < b[0])
        {
            return true;
        }
        else if (a[0] > b[0])
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    int maximumPopulation(vector<vector<int>>& logs) 
    {
        sort(logs.begin(), logs.end(), comp);

        int max = INT_MIN;
        int maxindex = INT_MIN;
        vector<int> anos(2051);

        for (int i = 0; i < logs.size(); i++)
        {
            for (int j = logs[i][0]; j < logs[i][1]; j++)
            {
                anos[j]++;
                if (anos[j] > max)
                {
                    max = anos[j]; 
                    maxindex = j;
                }
            }
        }    
        return maxindex;
    }
};
