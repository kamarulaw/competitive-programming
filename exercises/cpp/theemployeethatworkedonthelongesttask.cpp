/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
        int k = logs.size();
        map<int,vector<int>> m;
        for (int i = 0; i < k; i++)
        {
            if (i==0)
            {
                m[logs[i][0]].push_back(logs[i][1]);
            }
            else
            {
                m[logs[i][0]].push_back(logs[i][1]-logs[i-1][1]);
            }
        } 
        int longesttime = INT_MIN;
        for (auto it : m)
        {
            sort(it.second.begin(),it.second.end());
            longesttime = max(longesttime,it.second[it.second.size()-1]);
        }   
        vector<int> potentialsol;
        for (auto it : m)
        {
            for (int i = 0; i < it.second.size(); i++)
            {
                if (it.second[i]==longesttime)
                {
                    potentialsol.push_back(it.first);
                }
            }
        }
        sort(potentialsol.begin(),potentialsol.end());
        return potentialsol[0];
    }
};
