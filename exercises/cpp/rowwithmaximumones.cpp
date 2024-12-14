/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    static bool comp(pair<int,vector<int>> p1, pair<int,vector<int>> p2)
    {
        int s1 = 0;
        int s2 = 0;
        for (int i = 0; i < p1.second.size(); i++)
        {
            s1 += p1.second[i];
        }
        for (int i = 0; i < p2.second.size(); i++)
        {
            s2 += p2.second[i];
        }
        if (s1 != s2)
        {
            return s1 >= s2;
        }
        else
        {
            return p1.first < p2.first;
        }
    }

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        vector<pair<int,vector<int>>> v;
        for (int i = 0; i < m; i++)    
        {
            pair<int,vector<int>> pair_;
            pair_.first = i;
            pair_.second = mat[i];
            v.push_back(pair_);
        }
        sort(v.begin(), v.end(), comp);
        int count = 0;
        for (int i = 0; i < v[0].second.size(); i++)
        {
            count += v[0].second[i];
        }
        return {v[0].first, count};
    }
};
