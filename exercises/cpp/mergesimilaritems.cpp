/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    static bool comp(vector<int> a,vector<int> b)
    {
        return a[0] <= b[0];
    }

    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) 
    {
        map<int,int> m;
        for (int i = 0; i < items1.size(); i++)    
        {
            m[items1[i][0]] += items1[i][1];
        }
        for (int i = 0; i < items2.size(); i++)
        {
            m[items2[i][0]] += items2[i][1];
        }
        vector<vector<int>> sol;
        for (auto it : m)
        {
            sol.push_back({it.first,it.second});
        }
        sort(sol.begin(),sol.end(),comp);
        return sol;
    }
};
