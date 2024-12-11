/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) 
    {
        vector<int> v;
        map<int,vector<int>> ref_;
        //map<vector<int>,int> invref_;
        for (int i = 0; i < score.size(); i++)
        {
            v.push_back(score[i][k]);
            ref_[score[i][k]] = score[i];
            //invref_[score[i]] = score[i][k];
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        vector<vector<int>> sol;
        for (int i = 0; i < v.size(); i++)
        {
            sol.push_back(ref_[v[i]]);
        }
        return sol;
    }
};
